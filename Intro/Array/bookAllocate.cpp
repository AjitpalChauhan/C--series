#include <iostream>
using namespace std;

bool isPossible(int arr[], int n, int mid, int m)
{
  int studentcount = 1;
  int pageSum = 0;

  for (int i = 0; i < n; i++)
  {
    if (pageSum + arr[i] <= mid)
    {
      pageSum += arr[i];
    }
    else
    {
      studentcount++;
      if (studentcount > m || arr[i] > mid)
      {
        return false;
      }
      pageSum = arr[i];
    }
  }
  return true;
};

int main()
{
  int arr[4] = {10, 20, 30, 40};
  int n = 4;
  int m = 4;

  int s = 0;
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += arr[i];
  }
  int e = sum;
  int ans = -1;

  int mid = s + (e - s) / 2;

  while (s <= e)
  {
    if (isPossible(arr, n, mid, m))
    {
      ans = mid;
      e = mid - 1;
    }
    else
    {
      s = mid + 1;
    }
     mid = s + (e-s)/2;
  }
  cout << ans<< endl;
  return ans;
}
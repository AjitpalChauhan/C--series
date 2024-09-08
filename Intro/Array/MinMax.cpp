#include <iostream>
#include <climits>
using namespace std;

int getMax(int num[], int n)
{
  int maximum = INT_MIN;

  for (int i = 0; i < n; i++)
  {
    // if (num[i] > max)
    // {
    //   max = num[i];
    // }
    maximum = max(maximum, num[i]);
  }
  return maximum;
}

int getMin(int num[], int n)
{
  int mini = INT_MAX;

  for (int i = 0; i < n; i++)
  {
    // if (num[i] < min)
    // {
    //   min = num[i];
    // }
    mini = min(mini, num[i]);
  }
  return mini;
}

int main()
{
  int size;
  cout << "Enter the number of elements: "<< endl;
  cin >> size;
  int num[100];

  cout << "enter the elements:"<< endl;

  for(int i = 0; i< size; i++ ){
    cin >> num[i];
  }

  cout << "Maximun value is" << getMax(num, size) << endl;
  cout << "Minimum value is" << getMin(num, size) << endl;
}
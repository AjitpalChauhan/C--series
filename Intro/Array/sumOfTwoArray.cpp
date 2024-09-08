#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse(vector<int> v)
{
  int s = 0;
  int e = v.size() - 1;
  while (s < e)
  {
    swap(v[s++], v[e--]);
  }
  return v;
}

int main()
{
  vector<int> n;
  n.push_back(3);
  n.push_back(9);
  n.push_back(6);
  n.push_back(4);

  vector<int> m;
  m.push_back(1);
  m.push_back(4);
  m.push_back(5);
  m.push_back(2);

  int i = n.size() - 1;
  int j = m.size() - 1;
  vector<int> ans;

  int carry = 0;

  while (i >= 0 && j >= 0)
  {
    int val1 = n[i];
    int val2 = m[j];

    int sum = val1 + val2 + carry;
    carry = sum / 10;
    int value = sum % 10;
    ans.push_back(value);

    i--;
    j--;
  }

  // first case
  while (i >= 0)
  {
    int sum = n[i] + carry;
    carry = sum / 10;
    int value = sum % 10;
    ans.push_back(value);
    i--;
  }

  // second case
  while (j >= 0)
  {
    int sum = m[j] + carry;
    carry = sum / 10;
    int value = sum % 10;
    ans.push_back(value);
    j--;
  }

  // third case
  while (carry != 0)
  {
    int sum = carry;
    carry = sum / 10;
    int value = sum % 10;
    ans.push_back(value);
  }

  ans = reverse(ans);

  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << " ";
  }
}
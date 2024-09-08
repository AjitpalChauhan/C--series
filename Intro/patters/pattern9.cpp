#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int i = 1;
  while (i <= n)
  {
    int j = 1;
    int count = i;
    while (j <= i)
    {
      cout << count ;
      count++;
      j++;
    }
    cout << endl;
    i++;
  }

  int i = 1;
  while (i <= n)
  {
    int j = 1;
    while (j <= i)
    {
      cout << i + j - 1 ;
      j++;
    }
    cout << endl;
    i++;
  }
}

// n=4
// 1
// 23
// 345
// 4567
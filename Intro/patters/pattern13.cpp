#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int i = 1;
  char count = 'A';
  while (i <= n)
  {
    int j = 1;
    while (j <= n)
    {
      cout << count << " ";
      count++;
      j++;
    }
    cout << endl;
    i++;
  }
}

// n=3
// A B C 
// D E F
// G H I

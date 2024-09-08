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
      cout << count - i + 1 << " ";
      count++;
      j++;
    }
    cout << endl;
    i++;
  }

  while(i<=n){
int j = 1;
   while (j<=n)
    {
      char ch = 'A' + i + j - 2;
      cout << ch ;
      j++;
    }
    cout << endl;
    i++;
  }
}

// n=3
// A B C 
// B C D
// C D E

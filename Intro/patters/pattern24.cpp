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
    int space = n - i;
    while (space)
    {
      cout << " ";
      space--;
    }
    while(j<=i){
      cout<< j;
      j++;
    }
    cout << endl;
    i++;
  }
}

// n=4
//    1
//   12
//  123
// 1234
#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int i = 1;
  int count = 1;
  while (i <= n)
  {
    int j = 1;
    int space = n-i;
    while (space)
    {
      cout << " ";
      space--;
    }
    while(j<=n){
      cout<< count << " ";
      count++;
      j++;
    }
    cout << endl;
    i++;
  }
}

// n=4
//    1
//   23
//  456
// 78910
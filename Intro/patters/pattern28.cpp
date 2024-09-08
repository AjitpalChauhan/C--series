#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Input n here:";
  cin >> n;

  int i = 1;
  while (i <= n)
  {
    int j = i;
    while(j<=n){
      cout << j - i + 1;
      j++;
    }
    int star = i - 1;
    while(star){
      cout << "*";
      star--;
    }

  int star2 = i - 1;
    while (star2){
      cout << "*";
      star2--;
    }

    int k = n - i + 1;
    while(k){
     cout << k;
     k--; 
    }
    cout << endl;
    i++;
  }
}

// n=4
// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1


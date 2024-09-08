#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  // int i = 1;

/*
  while (i <= n)
  {
    cout << i << " ";
    i++;
  }
*/

/*
  int sum = 0;
  while (i <= n)
  {
    sum = sum + i;
    i++;
  }
  cout << sum;
*/

int i = 2;

while(i<n){
  if(n%i == 0){
    cout << "not prime for"<< i << endl;
  } else {
    cout << "prime number for"<< i << endl;
  }
  i++;
}


}
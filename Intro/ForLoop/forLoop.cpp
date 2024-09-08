#include <iostream>
using namespace std;
 
int main() {
  int n;
  cout << "enter the value of n" << endl;
  cin>> n;

  cout << "printing count from 1 to n" << endl;
  for(int i = 1; i<=n; i++){
    cout << i << endl;
  }

  for(int i = 1, j = 1; i<=n, j<=n; i++, j++){
    cout << i<< j<< endl;
  }

}

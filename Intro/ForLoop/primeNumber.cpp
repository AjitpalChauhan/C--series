#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "enter the value of n" << endl;
  cin >> n;
  bool isPrime = 1;

  for(int i= 2; i<n; i++){
    float number = n % i; 
    if(number == 0){
      cout << "not a prime number" << endl;
      isPrime = 0;
      break;
    }
  }

  if(isPrime == 1){
    cout << "Is a prime number" << endl;
  }

  for(int i = 0; i<=15; i+=2){
    cout << i << endl;
    if(i&1){
      continue;
    }
    i++;
  }
  
  for(int i = 0; i<5; i++){
    for(int j = i; j<=5 ; j++){
      cout << i << " " << j << endl;
    }
  }



}
// 024, 000000, 02468101214, 0 12345 1 12345 2 12345 3 12345 4 12345 5 12345 , 012345 12345 2345 345 45 5
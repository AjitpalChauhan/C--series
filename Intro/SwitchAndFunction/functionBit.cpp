#include <iostream>
using namespace std;

int numberOfBit(int num){
int ans = 0;
while(num != 0 ){
  int bit = num & 1;
  if(bit == 1){
    ans++;
  }
  num = num >> 1;
}
return ans;
}

int main() {
  int num1, num2;
  cin >> num1 >> num2;
int one = numberOfBit(num1);
int two = numberOfBit(num2);
int sum = one + two;
cout << sum << endl;
}

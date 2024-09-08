#include <iostream>
using namespace std;

int main() {
  int arr[9]= {1,2,3,4,5,6,7,8,2};
  int size = 9;
  int ans = 0;

  for(int i = 0; i < size; i++ ){
    ans = ans^arr[i];
  }

  cout << ans<< endl;

  for(int i= 1; i < size; i++){
    ans = ans^i;
  }

  cout << ans<< endl;

}
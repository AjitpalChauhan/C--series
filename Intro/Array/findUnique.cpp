#include <iostream>
using namespace std;

int main() {
  int arr[7] = {1,2,3,4,3,2,1};
  int size = 7;

  int ans=0;
  for(int i = 0; i<size; i++){
    ans = ans^arr[i];
  }
  cout << ans;
}
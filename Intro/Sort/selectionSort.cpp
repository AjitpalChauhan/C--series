#include <iostream>
using namespace std;

int main(){
  int arr[6] = {2,5,8,4,6,2};
  int n =  6;
  int mini = 0;
  for(int i = 0; i< n; i++){
    int minIndex = i;
    for(int j = i; j<n; j++){
      if(arr[j] < arr[minIndex]){
        minIndex = j;
      }
    }
    swap(arr[minIndex] , arr[i]);
  }
  cout << arr << endl;
}
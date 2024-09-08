#include <iostream>
using namespace std;

int sortOne(int arr[], int size){
  int i=0;
  int j = size-1;
  while(i < j){
    
    while(arr[i] == 0 && i < j){
      i++;
    }

    while(arr[j] == 1 && i < j){
      j--;
    }

    swap(arr[i], arr[j]);
    i++;
    j--;

  }
}

int printArray(int arr[], int size){
 for(int i = 0; i < size; i++){
    cout << arr[i]<< " ";
  }
  cout << endl;
}

int main() {
  int arr[8]= {1,0,0,1,1,0,1,0};

  sortOne(arr, 8);
  printArray(arr, 8);
}
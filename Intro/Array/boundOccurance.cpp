#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int key){
  int start = 0;
  int end = n-1;
  int mid = start + (end-start)/2;
  int ans = -1;

  while(start<=end){
    if(arr[mid] == key){
      ans = mid;
      end = mid-1;
    }else if(arr[mid] < key){
      start = mid +1;
    }else if(arr[mid] > key){
      end = mid -1;
    }
    mid = start + (end-start)/2;
  }
  return ans;
}

int lastOcc(int arr[], int n, int key){
  int start = 0;
  int end = n-1;
  int mid = start + (end-start)/2;
  int ans = -1;

  while(start<=end){
    if(arr[mid] == key){
      ans = mid;
      start = mid+1;
    }else if(arr[mid] < key){
      start = mid +1;
    }else if(arr[mid] > key){
      end = mid -1;
    }
    mid = start + (end-start)/2;
  }
  return ans;
}

int main() {
  int even[6] = {1,2,3,3,4,5};
  int odd[5] = {1,2,3,3,5};

  cout << firstOcc(even, 6, 3)<< endl;
  cout << lastOcc(even, 6, 3)<< endl;

  return 0;

}
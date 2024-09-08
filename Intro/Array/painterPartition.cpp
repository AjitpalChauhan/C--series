#include <iostream>
using namespace std;

bool isPossible( int arr[], int n, int m, int mid){

  int painterCount = 1;
  int minTime = 0;

  for(int i= 0; i<n; i++){
    if(minTime + arr[i] <= mid ){
      minTime += arr[i];
    }else{
      painterCount++;
      if(painterCount > m || arr[i] > mid){
        return false;
      }
      minTime = arr[i];
    }
  }
  return true;
}

int main() {
  int arr[4] = {5,5,5,5};
  int n = 4;
  int m = 2;

  int s = 0;
  int sum = 0;
  for(int i = 0; i<n; i++){
    sum += arr[i]; 
  }
  int e = sum;
  int ans = -1;
  int mid = s + (e-s)/2;

  while(s<=e){
    if(isPossible(arr,n,m,mid)){
      ans = mid;
      e = mid -1;
    }else{
      s = mid+1;
    }
    mid = s +(e-s)/2;
  }
  cout << ans<< endl;
  return ans;

}
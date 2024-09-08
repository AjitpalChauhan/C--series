#include <iostream>
#include <algorithm>
using namespace std;

bool isPossible(int arr[], int stall, int cows, int mid){
  int cowCount = 1;
  int lastPosition = arr[0];

  for(int i = 0; i < stall; i++){
    if(arr[i] - lastPosition >= mid){
      cowCount++;
      if(cowCount == cows){
        return true;
      }
      lastPosition = arr[i];
    }
  }
  return false;
}

int main() {
  int arr[4]= {4,1,2,6};
  std :: sort(arr, arr + 4); 
  int stall = 4;
  int cows = 2;
  int s = 0;
  int maxi = -1;
  for(int i = 0; i < stall; i++){
    maxi = max(maxi, arr[i]);
  }
  int e = maxi;
  int ans = -1;
  int mid = s +(e-s)/2;

  while(s <=e){
    if(isPossible(arr,stall,cows,mid)){
      ans = mid;
      s = mid +1;
    } else{
      e = mid -1;
    }
    mid = s +(e-s)/2;
  }
  cout << ans << endl;
}
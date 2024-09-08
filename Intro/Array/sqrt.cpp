#include <iostream>
using namespace std;

long long int sqrtInteger(int n){
  int s = 0;
  int e = n;
  long long int mid = s +(e-s)/2;

  long long int ans = -1;

  while(s<=e){
    long long int square = mid * mid;
    if(square == n){
      return mid;
    }

    if(square < n){
      ans = mid;
      s = mid +1;
    }else{
      e = mid-1;
    }
    mid =  s +(e-s)/2;
  }
  return ans;
}

double preciseAns(int n, int precision, int tempSol){
  double fraction = 1;
  double ans = tempSol;
for(int i = 0; i<precision; i++){
  fraction = fraction/10;
  for(double j = ans; j*j < n; j+=fraction){
    ans = j;
  }
}
return ans;
}

int main(){
  int n;
  cin >> n;

  int tempSol = sqrtInteger(n);

  cout << preciseAns(n,3,tempSol) << endl;

  return 0;
}
#include <iostream>
#include <climits>
using namespace std;

void update(int arr[], int n){

  cout << "Inside the function" << endl;

//printing the array in function
  for(int i = 0; i < 3; i++){
    cout << arr[i]<< endl;
  }

  cout << "end of the function" << endl;


}

int main() {
  int array[3] = {1,4,6};

  update(array, 3);

  //printing the array
  for(int i = 0; i < 3; i++){
    cout << array[i]<< endl;
  }

  return 0;

}
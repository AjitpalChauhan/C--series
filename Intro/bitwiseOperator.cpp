#include <iostream>
using namespace std;
 
int main() {
  int a = 4;
  int b = 6;

  cout << "a&b" << (a&b) << endl;
  cout << "a|b" << (a|b)<< endl;
  cout << "~a" << ~a << endl;
  cout << "a^b" <<(a^b) << endl;

  cout << (17<<1) << endl; //left shift x2 for every shift approx
  cout << (17 >> 2) << endl; // right shift /2 for every shift approx
}
#include <iostream>
using namespace std;

int main() {
  int amount;
  cout << "enter the amount" << endl;
  cin >> amount;

int note= 0;
int num = 1;
  switch (num)
  {
  case 1:
    note = amount/100;
    amount = (amount%100);
    cout << note  << "Rs 100 notes required" << endl;
  case 2:
    note = amount/50;
    amount = (amount%50);
    cout << note << "Rs 50 notes required" << endl;
  case 3:
    note = amount/20;
    amount = (amount%20);
    cout << note << "Rs 20 notes required" << endl;
  case 4:
    note = amount/10;
    amount = (amount%100);
    cout << note << "Rs 10 notes required" << endl;
  case 5:
    note = amount/1;
    amount = (amount%1);
    cout << note << "Rs 1 coin required" << endl;
    break;
  
  default: cout << "enter a valid amount" << endl;
    break;
  }
}
// Aakash Choudhari
// E&TC-A2
// 24070123031

#include <iostream>
using namespace std;

void swap(int &x, int&y) {
  int temp;
  temp = x;
  x = y;
  y = temp;

  cout << "\nInside function(before swapping): "<<endl;
  cout << "A = " << x << ", B = " << y << endl;
}

int main(){
  int a, b;

  cout << "Enter value of A: ";
  cin >> a;
  cout << "Enter value of B: ";
  cin >> b;

  cout << "\nBefore swapping (in main): " << endl;
  cout << "A = " << a << ", B = " << b << endl;

  swap(a,b);

  cout << "\nAfter function call (in main): " << endl;
  cout << "A = " << a << ", B = " << b << endl;

  return 0;
}

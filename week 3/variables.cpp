#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int a = 15;
  // a += 2 // a = a + 2;
  // a -= 2; // a = a - 2
  // a *= 2; // a = a * 2
  // a /= 2; // a = a / 2
  // a %= 2; // a = a % 2
  // a++; // a += 1;
  // a--; // a -= 1;
  cout << sqrt(a) << endl;
  cout << pow(a, 2) << endl;
  cout << M_PI << endl;
  cout << sin(M_PI/6) << endl;
  cout << cos(M_PI/6) << endl << tan(M_PI/6);
  cout << abs(-4) << endl << max(3, 4) << endl << min(3, 4) << endl;
  cout << floor(4.5) << endl << ceil(4.1) << endl << round(4.5);
  
  return 0;
}
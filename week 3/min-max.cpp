#include <iostream>
#include <cmath>
using namespace std;
int main() {
  float a = 14;
  float b = 16;
  float c = 15;
  cout << max(max(a, b), c) << endl;
  cout << min(min(a, b), c) << endl;
}
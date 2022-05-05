#include <iostream>
using namespace std;

// task 2: write swap function with references - Jahish
void swap(int& a, int& b){
  int tem=a;
    a=b;
    b= tem;
}

int main(){
    // task 1: create an integer variable and a reference variable to it - Alibek
  int x = 10;
  int& ref = x;
  cout << "x = " << x << endl;
    // change the first variable
  x = 20;
  cout << x << " " << ref << endl;
    // check the values 
    // change the second (reference) variable
    ref = 30;
    // check the values
   cout << x << " " << ref << endl;
    int y = 1;
    ref = y;
    cout << x << " " << y << " " << ref << endl;
    y = 2;
    cout << x << " " << y << " " << ref << endl;

    int a = 1, b = 2;
    swap(a,b);
    cout << a << " " << b << endl;

    // task 3: create a C style string using char pointer
    char* c="words";
    // print c as a string
    cout<<c<<endl;
    // print address of pointer c
    cout<<&c<<endl;
    // print second character of c
    cout<<*(c+1)<<endl;
    // print beginning from second character
    cout << c+1 << endl;
    // print second character with square brackets like in an array
    cout << c[1] << endl;
    // changing causes error (segmentation fault)
    // *c='O';
    // cout << c << endl;
    // c[0] = 'W';
    // cout << c << endl;
    void* c2 = (void*)c;
    // address of the first character
    cout << c2 << endl;
}
#include <iostream>
using namespace std;

void square(int x){
    x=x*x;
    cout << x << endl;
}


void square2(int* xptr){
    // task 7: write this function so that it changes the value of variable that you pass - Ali
    *xptr*=*xptr;
    cout << *xptr << endl;
}

void swap(int* a, int* b){
    // task 8 - Almaz
    int temp=*a;
    *a=*b;
    *b=temp;
}

// task 9: create void function that increments integer by 1 using pointers - Chingiz
void inc(int* a)
{
    *a=*a+1;
}
  

// task 10: create void function that changes all integers in array to zero - Nurlan, Abdurahmon
void change0(int* arr, int n){
  for(int i=0;i<n;i++){
    arr[i] = 0;
    }
}


int main(){
    // task 1: create int variable, get its memory address - Jahish
    int v=12;
    cout<< &v<<endl;
    // task 2: create a pointer and store the address in it - Ali
    int* ptr=&v;
    
    // task 3: get the value of v from a pointer
  cout<<*ptr << endl;

    // task 4: change value of v using the pointer - Ernur
    *ptr=1;
    cout<<v<<endl;
    // task 5: create another pointer that stores the address of ptr - Alibek
    int **p2 = &ptr;
    cout << p2 << endl;
    cout << *p2 << endl;
    cout << **p2 << endl;
    // task 6: create an array and make a pointer to array - Bakytzhan
    // get the first number and second number using this pointer
    int arr[5] = {1, 2, 3, 4, 5};
    int *parr=arr;
    cout<<*parr<<" "<<*(parr+1) << endl;

    int x = 5;
    square(x);
    cout << x << endl;

    square2(&x);
    cout << x << endl;

    int a = 5;
    int b = 4;
    swap(&a, &b);
    cout << a << " " << b << endl;

    int y=9;
    inc(&y);
    cout << y << endl;

    int ab = 1;
    int n = ab++;
    cout << n << endl; // 1
    cout << ab << endl; // 2
    int m = ++ab;
    cout << m << endl; // 3
    cout << ab << endl; // 3

    change0(arr, 5);

    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
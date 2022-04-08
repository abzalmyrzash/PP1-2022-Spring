#include <iostream>
using namespace std;

int square(int x){
	int result = x*x;
	return result;
}

// 4! = 1*2*3*4
int factorial(int n){
	int result=1;
	for(int i=2; i<=n; i++){
		result *= i;
	}
	return result;
}

// 0! = 1
// 1! = 1
// 2! = 1*2 = 1! * 2
// 3! = 1*2*3 = 2! * 3
// 4! = 1*2*3*4 = 3! * 4
int factorialR(int n){
	if(n == 0 || n == 1) return 1;
	return n*factorial(n-1);
}

void printNumbersR(int n){
	if(n == 1){
		cout << "1 ";
		return;
	}
	printNumbersR(n-1);
	cout << n << " ";
}

void infiniteR(int n){
	infiniteR(n-1);
	cout << n << " ";
}

// TASK: Given an integer n, find the sum of all integers from 1 to n, using recursion.
// n = 5, 1+2+3+4+5
int sum(int n){
	if(n <= 1)
		return n;
	return n + sum(n-1);
}

// 1 1 2 3 5 8 13 21

long long fibonacci(long long n){
	if(n < 1)
		return 0;
	if(n==1 || n==2)
		return 1;
	return fibonacci(n-1)+fibonacci(n-2);
}
// f(3)
// f(2) + (1)
// f(4)
// f(3) + f(2) = f(2) + f(1) + f(2)

long long fib_arr[100];

long long fibonacci2(long long n){
	if(fib_arr[n-1] == 0){
		fib_arr[n-1] = fibonacci2(n-1)+fibonacci2(n-2);
	}
	return fib_arr[n-1];
}

// 12 15
// 12: 1 2 3 4 6 12
// 15: 1 3 5 15
int gcd(int a, int b){
	if(b == 0)
		return a;
	return gcd(b, a%b);
}

// 12 15
// 12: 12 24 36 48 60 72
// 15: 15 30 45 60 75
int lcm(int a, int b){
	return a*b/gcd(a, b);
}

int main(){
	for(int i = 0; i < 100; i++){
		fib_arr[i] = 0;
	}
	fib_arr[0] = 1;
	fib_arr[1] = 1;
	int x;
	cin >> x;
	// cout << square(x);
	// cout << factorial(x) << endl;
	// cout << factorialR(x) << endl;
	// printNumbersR(x);
	// infiniteR(x);
	// cout << sum(x);
	// cout << fibonacci(x);
	cout << fibonacci2(x);
}
#include <iostream>

using namespace std;

// 0! = 1
// 1! = 1
// 2! = 2*1!
// 3! = 3*2!
// 4! = 1*2*3*4
// 5! = 1*2*3*4*5

int factorial(int n){
	if(n == 0 || n == 1) return 1;
	return n*factorial(n-1);
}

void recursion(int n){
	if(n==0) return;
	recursion(n-1);
}

void printNumbers(int n){
	for(int i=1; i <= n; i++)
		cout << i << " ";
}

// n = 5: pn(4) 5
// n = 4: pn(3) 4
// n = 3: pn(2) 3 
// n = 2: pn(1) 2 
// n = 1: 1

void printNumbers2(int n){
	if(n == 1){
		cout << "1 ";
		return;
	}
	printNumbers2(n-1);
	cout << n << " ";
}
// 1: 1
// 2: 1 + 2 = 3
// 3: 3 + 3 = 6
// 4: 6 + 4 = 10
int sum(int n){
	if(n==1) return 1;
	return sum(n-1)+n;
}

// 1 1 2 3 5 8 13

int arr[20];

int fibonacci(int n){
	if(n==1){
		return 1;
	}
	if(n==2){
		return 1;
	}
	arr[n-1] = fibonacci(n-1) + fibonacci(n-2);
	return arr[n-1];
}

// n^m
// m = 0: n^0=1
// m = 1: n^1=n*n^0
// m = 2: n^2=n*n^1
// m = 3: n^3=n*n^2
// m > 0: n^m=n*n^(m-1)

int power(int n, int m){
	if(m == 0) return 1;
	return n*power(n, m-1);
}

int main(){
	arr[0] = 1;
	arr[1] = 1;
	int n;
	cin >> n;
	// cout << factorial(n);

	// recursion(n);
	// printNumbers2(n);
	// cout << sum(n);
	if (n < 1){
		cout << "ERROR!";
		return 1;
	}
	fibonacci(n);
	for(int i=0; i < n; i++){
		cout << arr[i] << " ";
	}
	return 0;
}
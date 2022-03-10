#include <iostream>
#include <cmath>
using namespace std;

double mySquare(double x){
	double result = x*x;
	return result;
}

bool isPrime(int x){
	for(int i=2; i<=sqrt(x); i++){
		if(x%i==0) return false;
	}
	return true;
}

bool isPalindrome(string str){
	int n = str.size();
	bool isPalindrome=true;
	for(int i=0; i<n/2; i++){
		if(str[i]==str[n-i-1])
			continue;
		isPalindrome=false;
	}
	return isPalindrome;
}

int main(){
	double x;
	cin >> x;
	cout << mySquare(x) << endl;
	cout << isPrime(x) << endl;
	string str = "aba";
	cout << isPalindrome(str) << endl;
	cout << isPalindrome("abat") << endl;
	return 0;
}
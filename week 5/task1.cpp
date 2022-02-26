#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	// task: find how many positive numbers there are in the array
	int counter=0;
	for(int i=0; i<n; i++){
		if(a[i]>0)
			counter++;
	}
	cout << counter;
}
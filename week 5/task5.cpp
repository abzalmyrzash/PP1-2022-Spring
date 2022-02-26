#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	// task: print array in reverse
	// ex: a[5] = {1, 2, 3, 4, 5}
	// print: 5 4 3 2 1
	for(int i=n-1; i>=0; i--){
		cout << a[i] << " ";
	}
}
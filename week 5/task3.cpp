#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	// task: output numbers with odd index
	// ex: a[5] = {1, 2, 3, 4, 5}
	// print: 2, 4
	for(int i=1; i<n; i+=2){
		cout << a[i] << " ";
	}
}
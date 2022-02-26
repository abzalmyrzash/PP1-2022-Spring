#include <iostream>
#include <cstdio> // for freopen
using namespace std;

int main(){
	freopen("input.txt", "r", stdin); // reading from a file
	freopen("output.txt", "w", stdout); // writing to a file
	int n;
	cin >> n; // reads from input.txt
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i]; // reads from input.txt
	}

	int counter=0;
	for(int i=0; i<n; i++){
		if(a[i]>0)
			counter++;
	}
	cout << counter; // writes to output.txt 
}
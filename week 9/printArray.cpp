#include <iostream>
using namespace std;

int arr[1000];

void printElement(int n){
	if(n == 0){
		cout << arr[0] << " ";
		return;
	}
	printElement(n-1);
	cout << arr[n] << " ";
}

int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	printElement(n-1);
}
#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	// task: find the second maximum
	int max, second_max;
	if(a[0] > a[1]){
		max = a[0];
		second_max = a[1];
	} else {
		max = a[1];
		second_max = a[0];
	}
	for(int i=2; i<n; i++){
		if(max < a[i]){
			second_max = max;
			max = a[i];
		}
		else if(second_max < a[i]){
			second_max = a[i];
		}
	}
	cout << "max: " << max << endl;
	cout << "Second max: " << second_max << endl;
}
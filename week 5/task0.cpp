#include <iostream>
using namespace std;

int main(){
	// how to initialize an array
	int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	// access 1st element (index 0)
	cout << a[0]; // 1
	// access 2nd element (index 1)
	cout << a[1]; // 2


	for(int i=0; i<10; i++){
		cout << a[i] << " ";
	}

	// how to create an array from user input
	// n - size
	int n;
	cin >> n;
	int b[n];
	for(int i=0; i<n; i++){
		cin >> b[i];
	}
	// calculate sum
	int sum = 0;
	for(int i=0; i<n; i++){
		sum += b[i];
	}
	cout << "Sum: " << sum << endl;
	// calculate average
	float average=(float)sum/n; // convert sum to float, otherwise we get an integer average
	cout << "Average: " << average << endl;
	return 0;
}
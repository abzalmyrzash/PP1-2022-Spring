#include <iostream>
using namespace std;

int main(){
	int n, m;
	// n is the number of rows
	// m is the number of columns
	cin >> n >> m;
	int a[n][m];
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> a[i][j];
		}
	}
	// task: find a row whose sum is the greatest
	// ex: a[2][3] = {{2, 4, 8}, {0, 6, 7}}
	// row 0: {2, 4, 8} - sum=14
	// row 1: {0, 6, 7} - sum=13
	// output: 0

	// first, find the sum of each row and store into sums array
	int sums[n]; // n is the number of rows
	for(int i=0; i<n; i++){
		sums[i] = 0;
		for(int j=0; j<m; j++){
			sums[i]+=a[i][j];
		}
	}
	cout << "Sums: " << endl;
	for(int i=0; i<n; i++){
		cout << sums[i] << endl;
	}
	// next, find the maximum in the sums array and its index
	int max = sums[0];
	int max_index = 0;
	for(int i=1; i<n; i++){
		if(max < sums[i]){
			max = sums[i];
			max_index = i;
		}
	}
	cout << "Max sum: " << max << endl;
	cout << "Row: " << max_index << endl;
}
#include <iostream>
#include <vector>
using namespace std;

int main(){
	// 5 12 7 1 -2 32434 0
	int x;
	vector<int> v;
	do{
		cin >> x;
		v.push_back(x);
	}
	while(x != 0);
	int sum = 0;
	for(int i=0; i < v.size(); i++){
		sum += v[i];
	}
	float avg = float(sum)/(v.size()-1);
	cout << "SUM: " << sum;
	cout << endl << "AVG: " << avg;
}
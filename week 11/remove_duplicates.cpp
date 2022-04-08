#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	// 6
	// 1 2 2 3 4 2
	// 2 5 -2 9
	// 6
	// 5 5 4 2 3 1
	// 1 2 3 4 5 5
	// 5 4 2 3 1
	int n;
	cin >> n;
	int x;
	vector<int> v;
	for(int i = 0; i < n; i++){
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	for(int i = 0; i < v.size(); i++){
		cout << v[i] << " ";
	}
	cout << endl;

	for(int i = 0; i < v.size()-1; i++){
		if(v[i] == v[i+1]){
			v.erase(v.begin()+i);
			i--;
		}
	}
	cout << endl;

	for(int i = 0; i < v.size(); i++){
		cout << v[i] << " ";
	}
}
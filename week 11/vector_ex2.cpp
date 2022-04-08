#include <iostream>
#include <vector>
using namespace std;

int main(){
	// 6
	// 2 5 -2 0 9 0
	// 2 5 -2 9
	int n;
	cin >> n;
	int x;
	vector<int> v;
	for(int i = 0; i < n; i++){
		cin >> x;
		v.push_back(x);
	}
	// 2 5 -2 0 0 0
	// i = 0, 1, 2: OK
	// i = 4, v[i]=0, v={2, 5, -2, 0, 0}, i++, i=5
	// i=5, v[i]=0, v={2, 5, -2, 0}
	for(int i = 0; i < v.size(); i++){
		if(v[i] == 0){
			v.erase(v.begin()+i);
			i--;
		}
	}

	for(int i = 0; i < v.size(); i++){
		cout << v[i] << " ";
	}
}
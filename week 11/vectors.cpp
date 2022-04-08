#include <iostream>
#include <vector>
using namespace std;

int main(){
	int arr[5] = {1, 2, 3, 4, 5};
	vector<int> v = {1, 2, 3};
	v.push_back(4);
	for(int i = 0; i < v.size(); i++){
		cout << v[i] << " ";
	}
	cout << endl;
	v.pop_back();
	cout << "Current size: " << v.size() << endl;
	for(int i = 0; i < v.size(); i++){
		cout << v[i] << " ";
	}
	cout << endl;
	// cout << v.begin();
	v.insert(v.begin(), 0);
	cout << "Current size: " << v.size() << endl;
	for(int i = 0; i < v.size(); i++){
		cout << v[i] << " ";
	}
	// 0 1 2 3
	v.insert(v.begin()+1, 4);
	cout << endl << "Current size: " << v.size() << endl;
	for(int i = 0; i < v.size(); i++){
		cout << v[i] << " ";
	}
	v.erase(v.begin());
	cout << endl << "Current size: " << v.size() << endl;
	for(int i = 0; i < v.size(); i++){
		cout << v[i] << " ";
	}
	v.erase(v.begin()+1, v.end());
	cout << endl << "Current size: " << v.size() << endl;
	for(int i = 0; i < v.size(); i++){
		cout << v[i] << " ";
	}
	v.clear();
	cout << endl << "Current size: " << v.size() << endl;
	for(int i = 0; i < v.size(); i++){
		cout << v[i] << " ";
	}
}
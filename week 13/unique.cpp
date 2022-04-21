#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main(){
	int n;
	cin >> n;
	vector<int> v;
	for(int i=0; i<n; i++){
		int x;
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	vector<int>::iterator it=unique(v.begin(), v.end());
	v.resize(std::distance(v.begin(),it));
	for(it=v.begin(); it!=v.end(); it++){
		cout << *it << " ";
	}
	return 0;
}
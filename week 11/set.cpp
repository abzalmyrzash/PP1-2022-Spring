#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin >> n;
	int x;
	set<int> s;
	for(int i = 0; i < n; i++){
		cin >> x;
		s.insert(s.end(), x);
	}

	for(set<int>::iterator it=s.begin(); it != s.end(); it++){
		cout << *it << " ";
	}
}
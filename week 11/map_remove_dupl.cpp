#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin >> n;
	map<int, bool> m;
	for(int i=0; i<n; i++){
		int x;
		cin >> x;
		if(m[x]==false)
			m.insert({x, true}); 
	}

	map<int,bool>::iterator it = m.begin();
	for (it=m.begin(); it!=m.end(); ++it)
    	cout << it->first << " ";
}
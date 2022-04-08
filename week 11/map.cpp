#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin >> n;
	map<string, int> m;
	for(int i=0; i<n; i++){
		int x;
		string s;
		cin >> s >> x;
		m.insert({s, x}); 
	}

	map<string,int>::iterator it = m.begin();
	for (it=m.begin(); it!=m.end(); ++it)
    	cout << it->first << " => " << it->second << '\n';
    cout << m["Alex"] << endl;
    cout << m["Sam"];
}
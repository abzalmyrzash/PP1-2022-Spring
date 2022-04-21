#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void print(int i){
	cout << i << " ";	
}

int main(){
	vector<int> v;
	for(int i=0; i<10; i++){
		v.push_back(i);
	}
	for_each(v.begin(), v.end(), print);
	cout << endl;
	return 0;
}
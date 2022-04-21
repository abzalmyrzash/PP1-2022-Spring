#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool isOdd(int x){
	// if(x%2==1) return true;
	// else return false;
	return x%2==1;
}

int main(){
	vector<int> v;
	for(int i=0; i<10; i++){
		v.push_back(i);
	}
	cout << count_if(v.begin(), v.end(), isOdd) << endl;
	return 0;
}
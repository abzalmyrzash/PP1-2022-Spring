#include <iostream>

using namespace std;

int power(int n, int m){
	if(m == 0) return 1;
	return n*power(n, m-1);
}

int main(){
	int n, m;
	cin >> n >> m;
	if(m < 0){
		cout << "ERROR!";
		return 1;
	}
	cout << power(n, m);
	return 0;
}
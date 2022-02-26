#include <iostream>
using namespace std;

int main(){
	// task: find all powers of 2 not exceeding N
	int N;
	cin >> N;
	int x=1;
	while(x<=N){
		cout << x << " ";
		x*=2;
	}
}
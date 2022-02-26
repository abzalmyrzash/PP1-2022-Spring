#include <iostream>
using namespace std;

int main(){
	// task: find smallest k such that 2^k > N
	int N;
	cin >> N;
	int k=0;
	int x=1;
	while(x < N){
		x*=2;
		k++;
	}
	cout << k;
}
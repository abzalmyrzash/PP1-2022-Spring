#include <iostream>
using namespace std;

int main(){
	// task: find the smallest divisor of N
	int N;
	cin >> N;
	for(int i=2; i<N; i++){
		if(N%i==0){
			cout << i << endl;
			break;
		}
	}
}
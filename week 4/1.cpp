#include <iostream>
using namespace std;

int main(){
	// task: find all square numbers that do not exceed N
	int N;
	cin >> N;
	int x=1;
	while(x*x <= N){
		cout << x*x << endl;
		x++;
	}
}
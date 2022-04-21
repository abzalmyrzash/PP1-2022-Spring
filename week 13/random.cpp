#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main(){
	srand(time(NULL));
	// cout << rand() << " ";
	// cout << rand() << " ";
	// cout << rand() << " ";
	// cout << rand() << " ";
	// cout << rand() << " ";

	// select 1, 2 or 3
	// cout << rand()%3+1; //0+1=1, 1+1=2, 2+1=3
	//1950-2049
	cout << rand()%100+1950;
}
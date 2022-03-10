#include <iostream>
using namespace std;

int main(){
	// task: count the number of digits in a string
	// example: Hello123o43 KBTU17
	// print: 7
	string str;
	getline(cin, str);

	int counter = 0;
	for(int i=0; i<str.size(); i++){
		if('0' <= str[i] && str[i] <= '9')
			counter++;
	}
	cout << counter;
	return 0;
}
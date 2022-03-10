#include <iostream>
using namespace std;

int main(){
	// task: convert all characters to lowercase
	// example: hElLo wOrLD!
	// print: hello world!

	// char ch = 'C';
	// cout << char(ch+32);
	string str;
	// cin >> str; // separates by space
	getline(cin, str); // reads entire line including spaces
	for(int i=0; i<str.length(); i++){
		if(str[i]>='A' && str[i]<='Z')
			str[i] = str[i] + 32;
		// str[i] = tolower(str[i]);
	}
	cout << str;
	return 0;
}
#include <iostream>
using namespace std;

int main(){
	// task: print string in reverse

	string str;
	getline(cin, str);
	string str2=str;
	int j=0;
	for(int i=str.size()-1; i>=0; i--){
		cout << str[i];
		str2[j] = str[i];
		j++;
	}
	cout << endl;
	cout << str2 << endl;
	return 0;
}
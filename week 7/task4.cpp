#include <iostream>
using namespace std;

int main(){
	// task: is string a palindrome? (is string same as reversed string?)
	// example: ata - palindrome
	// qazaq - palindrome
	// kazakh - not palindrome
	string str;
	getline(cin, str);
	// string str2=str;
	// int j=0;
	// for(int i=str.size()-1; i>=0; i--){
	// 	str2[j] = str[i];
	// 	j++;
	// }
	// if (str==str2) cout << "YES";
	// else cout << "NO";
	int n = str.size();
	bool isPalindrome=true;
	for(int i=0; i<n/2; i++){
		if(str[i]==str[n-i-1])
			continue;
		isPalindrome=false;
	}
	if(isPalindrome) cout << "YES";
	else cout << "NO";
	return 0;
}
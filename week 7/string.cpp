#include <iostream>
#include <cstring>
using namespace std;

int main(){
	// C string
	// create a string as an array of chars
	char str[5] = "KBTU"; // extra "null terminator" character
	char str1[] = "Hello world";
	// get a character using index
	char ch = str[0];
	str[1] = 'b';
	cout << str << endl;
	// get its length
	cout << strlen(str1) << endl; // ignores null terminator
	cout << sizeof(str1)/sizeof(char) << endl; // counts it
	// compare two strings
	char str2[] = "abc";
	char str3[] = "abb";
	cout << strcmp(str2, str3) << endl;
	// concat two strings
	strcat(str2, str3); // C++ variant: str2 += str3
	strcat(str2, "123");
	cout << str2 << endl;
	// find a character in string
	cout << strchr(str2, 'c') << endl;
	if(strchr(str2, 'd') == NULL) cout << "NOT FOUND" << endl;
	// find a substring in string
	cout << strstr(str2, "bb") << endl;
	if(strstr(str2, "a1") == NULL) cout << "NOT FOUND" << endl;

	// C++ string
	string st = "Hello world!";
	cout << st << endl;
	cout << st.length() << endl;
	cout << st.find("world") << endl;
	cout << st.find('w') << endl;
	string st2 = "Goodbye";
	string st3 = st + st2;
	cout << st3 << endl;
	cout << st << endl; // st was not changed by concatenation
	cout << st[0] << endl;
	st[1] = 'E';
	cout << st << endl;
	return 0;
}
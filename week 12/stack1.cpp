#include <iostream>
#include <stack>

using namespace std;

int main(){
	stack<int> st;
	string s;
	while(s != "exit"){
		getline(cin, s);
		if(s.substr(0, 4) == "push"){
			int n = stoi(s.substr(5));
			st.push(n);
			cout << "ok" << endl;
		}
		else if(s == "pop"){
			st.pop();
			cout << "ok" << endl;
		}
		else if(s == "clear"){
			while(!st.empty()){
				st.pop();
			}
			cout << "ok" << endl;
		}
		else if(s == "back"){
			cout << st.top() << endl;
		}
		else if(s == "size"){
			cout << st.size() << endl;
		}
	}
	cout << "bye";
}
#include <iostream>
#include <stack>

using namespace std;

int main(){
	stack<int> st;
	if(st.empty()) cout << "empty!" << endl;
	cout << st.size() << endl;
	st.push(1);
	st.push(2);
	st.push(3);
	for(int i=0; i<3; i++){
		cout << st[i] << " ";
	}
	// cout << st.top() << endl;
	// st.pop();
	// cout << st.top() << endl;
	// st.pop();
	// cout << st.top() << endl;
	// st.pop();
	// if(st.empty()) cout << "empty!" << endl;
	while(!st.empty()){
		cout << st.top() << " ";
		st.pop();
	}
}
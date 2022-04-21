#include <iostream>
#include <queue>

using namespace std;

int main(){
	queue<int> q;
	string s;
	while(s != "exit"){
		getline(cin, s);
		if(s.substr(0, 4) == "push"){
			int n = stoi(s.substr(5));
			q.push(n);
			cout << "ok" << endl;
		}
		else if(s == "pop"){
			if(q.empty()){
				cout << "error!";
			}
			else{
				q.pop();
				cout << "ok" << endl;
			}
		}
		else if(s == "clear"){
			while(!q.empty()){
				q.pop();
			}
			cout << "ok" << endl;
		}
		else if(s == "front"){
			if(q.empty()){
				cout << "error!";
			}
			else{
				cout << q.front() << endl;
			}
		}

		else if(s == "back"){
			if(q.empty()){
				cout << "error!";
			}
			else{
				cout << q.back() << endl;
			}
		}
		else if(s == "size"){
			cout << q.size() << endl;
		}
	}
	cout << "bye";
}
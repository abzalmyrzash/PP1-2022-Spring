#include <queue>
#include <iostream>

using namespace std;

int main(){
	queue<int> q;
	q.push(1);
	q.push(2);
	cout << q.front() << endl;
	q.pop();
	cout << q.front() << endl;
	q.pop();
	if(q.empty()) cout << "empty";
}
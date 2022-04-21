#include <deque>
#include <iostream>

using namespace std;

int main(){
	deque<int> dq;
	dq.push_back(1);
	dq.push_back(2);
	dq.push_front(0);
	for(int i = 0; i < dq.size(); i++){
		cout << dq[i] << " ";
	}
	cout << endl;
	cout << dq.front() << endl;
	dq.pop_front();
	cout << dq.back() << endl;
	dq.pop_back();
	cout << dq.front() << " " << dq.back() << endl;
	dq.clear();
	if(dq.empty()) cout << "empty";
}
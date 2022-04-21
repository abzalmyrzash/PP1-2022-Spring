#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <time.h>

using namespace std;

int main(){
	srand(time(NULL));
	int n;
	cin >> n;
	string participants[n];
	for(int i = 0; i < n; i++){
		cin >> participants[i];
	}
	// generate ticket numbers
	// int tickets[n];
	vector<int> tickets(n);
	generate(tickets.begin(), tickets.end(), rand);
	// for(int i = 0; i < n; i++){
	// 	tickets[i] = rand();
	// }
	// select a random ticket
	int ticket_index = rand()%n;
	cout << tickets[ticket_index] << " " << participants[ticket_index];
}
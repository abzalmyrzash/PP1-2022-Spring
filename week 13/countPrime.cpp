#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<bool> Sieve;

void EratosthenesSieve(int n){
	Sieve.resize(n+1);
	fill(Sieve.begin(), Sieve.end(), true);
	for(int i=2; i<=n; i++){
		if(Sieve[i]==true){
			for(int j=i*2; j<=n; j+=i){
				Sieve[j] = false;
			}
		}
	}
}

// uses Sieve values
bool isPrime(int x){
	if(x<2) return false;
	return Sieve[x];
}

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	int max_n = *max_element(arr, arr+n);
	EratosthenesSieve(max_n); // fill correct values in vector Sieve
	cout << count_if(arr, arr+n, isPrime) << endl;
	return 0;
}
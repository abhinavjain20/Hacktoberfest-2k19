//Abhinav here....
#include<bits/stdc++.h>
#define endl "\n"
typedef long long int ll;
#define MOD 1000000007
#define mp make_pair
#define pb push_back
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define floop(i,a,b) for(long long int i=a;i<b;i++)
#define rloop(i,a,b) for(long long int i=a;i>=b;i--)
using namespace std;

void lets_do_it() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

// Time: O(N)
bool prime(int n) {
	if (n == 2) {
		return true;
	}

	if (n == 1) {
		return false;
	}

	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			return false;
		}
	}

	return true;
}

//TIme: Slightly Better

bool primeBetter(int n) {
	if (n == 2) {
		return true;
	}

	if (n == 1) {
		return false;
	}

	for (int i = 2; i * i < n; i++) {
		if (n % i == 0) {
			return false;
		}
	}

	return true;
}


// Time: O(loglogN)

void primeSieve(long long int n, long long int a[]) {

	for (long long int  i = 3; i <= n; i = i + 2) {
		a[i] = 1;
	}

	//Prime Sieve

	for (long long int i = 3; i <= n; i += 2) {
		if (a[i] == 1) {
			for (long long  int j = i * i; j <= n; j = j + i) {
				a[j] = 0;
			}
		}
	}
	// Special Case
	a[2] = 1;
	a[1] = a[0] =  0;

}

int main() {
	fast;
	lets_do_it();

	long long int n;
	cin >> n;
	long long int a[n] = {0};
	primeSieve(n, a);

	// Print the prime array
	for (long long int i = 0; i < n; i++) {
		if (a[i] == 1) {
			cout << i << " ";
		}
	}
	return 0;
}
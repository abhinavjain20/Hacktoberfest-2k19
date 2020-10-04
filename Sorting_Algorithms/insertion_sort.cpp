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

void insertionsort(int a[], int size) {
    for (int i = 1; i <= size - 1; i++) {
        int e = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > e ) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = e;
    }
}

int main() {
    fast;
    // lets_do_it();
    int n, key;
    cout << "Enter the number of elements of an array :";
    cin >> n;
    int a[1000];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    insertionsort(a, n);
    for (int i = 0; i <= n - 1; i++) {
        cout << a[i] << ",";
    }
    return 0;
}
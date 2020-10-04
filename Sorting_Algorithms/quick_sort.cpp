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

int partition(int a[], int s, int e) {
    int i = s - 1;
    int j = s;
    int p = a[e];

    while (j <= e - 1) {
        if (a[j] <= p) {
            i = i + 1;
            swap(a[i], a[j]);
        }
        j = j + 1;
    }
    swap(a[i + 1], a[e]);
    return i + 1;
}

void quickSort(int a[], int s, int e) {

    //Base Case
    if (s >= e) {
        return;
    }
    int p = partition(a, s, e);
    //Left Case
    quickSort(a, s, p - 1);
    //Right Case
    quickSort(a, p + 1, e);

}

int main() {
    fast;
    // lets_do_it();
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    quickSort(a, 0, n - 1);

    for (auto i : a) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
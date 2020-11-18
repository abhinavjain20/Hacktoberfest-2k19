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

void merge(int a[], int start, int end, int n) {

    int mid = start + (end - start) / 2;
    int i = start;
    int j = mid + 1;
    int k = start;

    int temp[n];

    while (i <= mid and j <= end) {
        if (a[i] < a[j]) {
            temp[k] = a[i];
            k++;
            i++;
        }
        else {
            temp[k] = a[j];
            j++;
            k++;
        }
    }

    while (i <= mid) {
        temp[k++] = a[i++];
    }

    while (j <= end) {
        temp[k++] = a[j++];
    }

    for (int i = 0; i <= end; i++) {
        a[i] = temp[i];
    }

}

void mergeSort(int a[], int start, int end, int n) {

// Base Case
    if (start >= end) {
        return;
    }

    int mid = start + (end - start) / 2;

    //Recursive Case
    mergeSort(a, start, mid, n);
    mergeSort(a, mid + 1, end, n);

    //Merge the two arrays

    merge(a, start, end, n);
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

    mergeSort(a, 0, n - 1, n);

    for (auto i : a) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
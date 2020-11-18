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

void  linearsearch(int a[], int size) {
  int left = 0;
  int right = size - 1;
  int mid = 0;

  while (mid <= right) {
    if (a[mid] == 0) {
      swap(a[left], a[mid]);
      mid++;
      left++;
    }
    if (a[mid] == 1) {
      mid++;
    }
    else {
      swap(a[mid], a[right]);
      right--;
    }
  }
}


int main() {
  fast;
  lets_do_it();
  long long n;
  cin >> n;
  int a[n];

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  linearsearch(a, n);

  for (int i = 0; i < n; i++) {
    cout << a[i] << endl;
  }
  return 0;
}
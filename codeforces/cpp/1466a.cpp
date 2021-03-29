/*	
	A, Bovine Dilemmma
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

typedef long long ll;

int main() {
	fast_io;
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int arr[n];
		for (int i=0; i<n; i++) {
			cin >> arr[i];
		}
		map<int, int> m;
		for (int i=0; i<n-1; i++) {
			for (int j=i+1; j<n; j++) {
				m[arr[j]-arr[i]]++;
			}
		}
		cout << m.size() << endl;
	}

	return 0;
}
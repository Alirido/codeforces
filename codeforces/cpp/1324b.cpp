/*	
	B. Yet Another Palindrome Problem
	Time limit 2 s
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
		int idx[n+1] = {0};
		for (int i=0; i<n; i++)
			cin >> arr[i];
		bool yes = false;
		int i = 0;
		while (!yes && i<n) {
			if (idx[arr[i]] == 0)
				idx[arr[i]] = i+1;
			else {
				if (i+1 - idx[arr[i]] > 1)
					yes = true;
			}
			i++;
		}
		cout << (yes ? "YES" : "NO") << endl;
	}

	return 0;
}
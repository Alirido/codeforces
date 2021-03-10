/*	
	A. String Similarity
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		string s;
		cin >> s;
		int len = s.length();
		for (int i=0; i<len; i+=2)
			cout << s[i];
		printf("\n");
	}

	return 0;
}
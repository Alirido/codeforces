/*	
	A. K-String
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;
char c;

int main() {
	int k;
	scanf("%d\n", &k);
	map<char, int> m;
	while ((c=getchar()) != '\n') {
		m[c]++;
	}
	string s = "";
	for (auto elem : m) {
		if (elem.second%k!=0) {
			puts("-1");
			return 0;
		} else {
			for (int i=1; i<=elem.second/k; i++)
				s+=elem.first;
		}
	}
	for (int i=1; i<=k; i++)
		cout << s;

	return 0;
}
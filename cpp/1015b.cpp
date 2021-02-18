/*
	B. Obtaining the String
	Time limit 1 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;
string s,t;

void swap(int idx) {
	char temp = s[idx];
	s[idx]=s[idx+1];
	s[idx+1]=temp;
}

int main() {
	int n;
	scanf("%d", &n);
	cin >> s;
	cin >> t;
	int ans=0;
	vector<int> mv;
	for (int i=0; i<n; ++i) {
		int j=i;
		while (s[j]!=t[i] && j<n-1) ++j;
		if (j==n-1) {
			if (s[j]!=t[i]) {
				printf("-1\n");
				return 0;
			}
		}
		ans+=j-i;
		for (--j; j>=i; j--) {
			mv.push_back(j);
			swap(j);
		}
	}
	printf("%d\n", ans);
	for (int i=0; i<mv.size(); ++i)
		printf("%d ", mv[i]+1);

	return 0;
}
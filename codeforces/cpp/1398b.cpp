/*	
	B. Substring Removal Game
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

string s;

int countAdj(int &pos, int ln) {
	bool equalAdj = true;
	pos++;
	int result = 1;
	while (pos < ln && equalAdj) {
		if (s[pos] != s[pos-1])
			equalAdj = false;
		else {
			result++;
			pos++;
		}
	}

	return result;
}

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		cin >> s;
		vector<int> v;
		int ln = s.length(), i=0;
		while (i<ln) {
			if (s[i] == '0')
				int temp = countAdj(i, ln);
			else 
				v.push_back(countAdj(i, ln));
		}
		sort(v.begin(), v.end(), greater<int>());
		int sz = v.size(), ans = 0;;
		for (i=0; i<sz; i+=2) {
			ans += v[i];
		}
		printf("%d\n", ans);
	}

	return 0;
}
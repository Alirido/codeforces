/*	
	B. Reversing Encryption
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;
string s;

void reverse(int l) {
	for (int j=0; j<l/2; j++) {
		char temp = s[j];
		s[j] = s[l-j-1];
		s[l-j-1] = temp;
	}
}

int main() {
	int n;
	scanf("%d", &n);
	cin >> s;
	vector<int> v;
	for (int j=1; j*j<=n; j++) {
		if (n%j == 0) {
			v.push_back(j);
			if (j*j != n)
				v.push_back(n/j);
		}
	}
	sort(v.begin(), v.end());

	/*testing ~~~
	for (int j=0; j<v.size(); j++) {
		cout << v[j] << " ";
	} cout << endl;
	~~~*/

	for (int j=0; j<v.size(); j++) {
		reverse(v[j]);
	}
	cout << s << endl;

	return 0;
}
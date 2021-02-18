/*	
	B. Lecture
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, l;
	scanf("%d %d", &n, &l);
	map<string, string> m;
	for (int i=0; i<l; i++) {
		string a, b;
		cin >> a >> b;
		if (a.length()>b.length()) {
			m.insert(make_pair(a, b));
		} else {
			m.insert(make_pair(a, a));
		}
	}
	string s;
	for (int i=0; i<n-1; i++) {
		cin >> s;
		cout << m.find(s)->second << " ";
	} 
	cin >> s;
	cout << m.find(s)->second << endl;;

	return 0;
}
/*
	A. Stones on the Table
	Time limit 2s
	Memory Limit 256 MB
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
	int n, i, take;
	string s;
	
	cin >> n;
	cin >> s; take = 0;
  if (s.length() > 1) {
	for (i=0; i<=s.length()-2; i++) {
		if (s[i] == s[i+1]) {
			take++;
		}
	}
  }
	cout << take << endl;
	
	return 0;
}

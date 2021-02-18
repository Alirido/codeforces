/*
	B. Queue at the School
	Time limit 2s
	Memory Limit 256 MB
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	int i, n, t;
	char temp;
	
	cin >> n >> t;
	cin >>s;
	for (i=1; i<=t; i++) {
		int j=0;
		while (j<=n-2) {
			if (s[j]<s[j+1]) {
				temp = s[j];
				s[j] = s[j+1];
				s[j+1] = temp;
				j = j+2;
			} else {
				j++;
			}
		}
	}
	cout << s << endl;
	
	return 0;
}

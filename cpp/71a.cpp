/*
	A. Way Too Long Words
	Time limit 2s
	Memory Limit 256 MB
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	int n, i;
	
	cin >> n;
	for (i=1; i<=n; i++) 
	{
		cin >> s;
		if (s.length() > 10) {
			cout << s[0] << s.length()-2 << s[s.length()-1] << endl;
			//s = s[0] + temp + s[t-1];
		} else {
			cout << s << endl;
		}
	}
	
	return 0;
}

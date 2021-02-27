/*
	A. HQ9+
	Time limit 2s
	Memory Limit 256 MB
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	
	cin >> s;
	bool exe = false;
	int i = 0;
	while (!exe && i<=s.length()-1) {
		if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9') 
		{
			exe = true;
		} else {
			i++;
		}
	}
	if (exe)
		cout << "YES";
	else 
		cout << "NO";
	cout << endl;
	
	return 0;
}

/*
	B. Delete from the Left 
	Time limit 1 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	string s,t;
	cin >> s;
	cin >> t;
	int i=s.length()-1, j=t.length()-1;
	bool stop=false;
	while (!stop && i>=0 && j>=0) {
		if (s[i]==t[j]) {
			i--; j--;
		} else stop=true;
	}
	printf("%d\n", i+j+2);

	return 0;
}
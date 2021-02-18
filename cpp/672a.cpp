/*	
	A. Summer Camp
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

string s;

void initialitation() {
	int i=1;
	while (s.length()<1000) {
		string temp = to_string(i);
		s += temp;
		++i;
	}
}

int main() {
	initialitation();
	// cout << s << endl;
	int n;
	scanf("%d", &n);
	printf("%c\n", s[n-1]);

	return 0;
}
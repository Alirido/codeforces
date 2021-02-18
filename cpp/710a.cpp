/*	
	A. King moves
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	cin >> s;
	int minus=0;
	if (s[0]=='a' || s[0]=='h') {
		minus +=3;
		if (s[1]=='1' || s[1]=='8')
			minus += 2;
	} else {
		if (s[1]=='1' || s[1]=='8')
			minus += 3;
	}
	printf("%d\n", 8-minus);

	return 0;
}
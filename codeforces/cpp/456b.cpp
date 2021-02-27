/*	
	B. Fedya and Maths
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	cin >> s;
	int n = s.length()-1;
	int cek = (n==0? (s[n]-'0') : ((s[n-1]-'0')*10 + (s[n]-'0')));
	printf("%d\n", (cek%4==0? 4 : 0));

	return 0;
}
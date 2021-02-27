/*	
	B. Tavas and SaDDas
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	cin >> s;
	int i=s.length()-1, ans=0, pow2=1;
	for (; i>=0; --i) {
		ans += pow2*(s[i]=='4'? 1 : 2);
		pow2 *= 2;
	}
	printf("%d\n", ans);

	return 0;
}
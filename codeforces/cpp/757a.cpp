/*	
	A. Gotta Catch Em' All!
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;
int a[140];
char c;
int main() {
	while ((c=getchar()) != '\n')
		a[c]++;
	int ans=0;
	while (a['B']>0 && a['b']>0 && a['u']>1 && a['l']>0 && a['a']>1 && a['s']>0 && a['r']>0) {
		ans++;
		a['B']--;
		a['u']-=2;
		a['l']--;
		a['b']--;
		a['a']-=2;
		a['s']--;
		a['r']--;
	}
	printf("%d\n", ans);

	return 0;
}
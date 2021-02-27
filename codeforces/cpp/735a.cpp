/*	
	A. Ostap and Grasshopper
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;
char a[105], c;

int main() {
	int n,k;
	scanf("%d%d\n", &n, &k);
	int i=1, ig, it;
	while ((c=getchar()) != '\n') {
		a[i]=c;
		if (a[i]=='G')
			ig=i;
		else if (a[i]=='T')
			it=i;
		++i;
	}	
	if (abs(it-ig)%k==0) {
		if (ig<it) {
			ig+=k;
			while (ig!=it && a[ig]!='#') ig+=k;
			if (a[ig]=='#')
				puts("NO");
			else puts("YES");
		} else {
			ig-=k;
			while (ig!=it && a[ig]!='#') ig-=k;
			if (a[ig]=='#')
				puts("NO");
			else puts("YES");
		}
	} else puts("NO");

	return 0;
}
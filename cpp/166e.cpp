/*	
	E. Tetrahedron
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

int main() {
	ll n;
	scanf("%I64d", &n);
	if (n==4)
		printf("21\n");
	else if (n==3)
		printf("6\n");
	else if (n==2)
		printf("3\n");
	else if (n==1)
		printf("0\n");
	else {
		ll full=27, ans=21;
		for (int i=5; i<=n; i++) {
			full = (full*3)%MOD;
			ans = (full-ans)%MOD;
		}
		cout << (ans+MOD)%MOD << endl;
	}

	return 0;
}
/*	
	D. Slime
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	bool pos=false, neg=false;
	long long ans, min=1e9+1;
	int x;
	for (int i=0; i<n; i++) {
		scanf("%d", &x);
		ans+=(x>=0? x : x*(-1));
		if (pos) {
			if (!neg) {
				if (x<0)
					neg=true;
				else {
					if (min>x)
						min = x;
				}
			}
		} else {
			if (neg) {
				if (x>0)
					pos=true;
				else {
					if (min > 0-x)
						min = 0-x;
				}
			} else {
				if (x<0) {
					neg=true;
					if (min > 0 - x)
						min = 0 - x;
				}
				else {
					pos=true;
					if (min>x)
						min = x;
				} 
			}
		}
	}
	if (pos && neg)
		cout << ans << endl;
	else {
		if (n==1)
			cout << ans*(x<0? -1 : 1) << endl;
		else {
			cout << ans - (2*min) << endl;
		}
	} 

	return 0;
}
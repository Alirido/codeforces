/*	
	B. Light It Up
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

struct light
{
	int odd, even;
};

int main() {
	int n, m;
	scanf("%d%d", &n, &m);
	int a[n+2], prev =0;
	for (int i=1; i<=n; ++i) {
		int x;
		scanf("%d", &x);
		a[i] = x-prev;
		prev = x;
	} a[n+1] = m-prev;
	light l[n+2];
	if ((n+1)%2==0) {
		l[n+1].even = a[n+1];
		l[n+1].odd = 0;
	} else {
		l[n+1].odd = a[n+1];
		l[n+1].even = 0;
	}
	for (int i=n; i>1; --i) {
		if (i%2==0) {
			l[i].even = a[i] + l[i+1].even;
			l[i].odd = l[i+1].odd;
		} else {
			l[i].odd = a[i] + l[i+1].odd;
			l[i].even = l[i+1].even;
		}
	}

	int mx=0, sum=0;
	for (int i=1; i<=n; i+=2) {
		sum += a[i];
		if (max((sum+l[i+1].even)-1, (sum+l[i+1].odd))>mx)
			mx = max((sum+l[i+1].even)-1, (sum+l[i+1].odd));
	}
	if ((n+1)%2==0) 
		mx = max(mx, sum+a[n+1]-1);
	printf("%d\n", mx);

	return 0;
}
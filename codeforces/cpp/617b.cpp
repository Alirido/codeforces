/*
	B. Chocolate
	Time limit 1 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;
int a[101];

int find1(int n, int i) {
	while (i<n && !a[i]) i++;
	if (i==n) 
		return -1;
	else return i;
}

int main() {
	int n;
	scanf("%d", &n);
	for (int i=0; i<n; i++) {
		scanf("%d", &a[i]);
	}
	int i=find1(n, 0), i2;
	unsigned long long ans=0;
	if (i!=-1) {
		ans++;
		i2 = find1(n, i+1);
	} else i2=i;
	while (i2 != -1) {
		ans *= (i2-i);
		i = i2;
		i2 = find1(n, i+1);
	}
	cout << ans;

	return 0;
}
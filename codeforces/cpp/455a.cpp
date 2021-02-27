/*
	A. Boredom
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
//#include <iostream>
using namespace std;
long long a[100002];

int main() {
	int n, t, i;
	cin>>n;
	for (i=0; i<n; i++) {
		cin>>t;
		++a[t];
	}
	for (i=2; i<=100000; i++) {
		a[i]=max(a[i-1], a[i-2]+a[i]*i);
	}
	cout<<a[100000];

	return 0;
}

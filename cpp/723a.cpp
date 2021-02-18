/*
	A. The New Year: Meeting Friends
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int a[4];
	cin >> a[0] >> a[1] >> a[2];
	sort(a, a+3);
	printf("%d\n", a[2]-a[0]);
	
	return 0;
}

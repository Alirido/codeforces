/*	
	A. Black Square
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int a[5];
	int a1, a2, a3, a4;
	scanf("%d%d%d%d", &a1, &a2, &a3, &a4);
	a[1] = a1;
	a[2] = a2;
	a[3] = a3;
	a[4] = a4;
	string s;
	cin >> s;
	int sum=0;
	for (int i=0; i<s.length(); i++) {
		sum += a[s[i]-'0'];
	}
	printf("%d\n", sum);

	return 0;
}
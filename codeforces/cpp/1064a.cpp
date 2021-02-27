/*	
	A. Make a triangle!
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int a,b,c;
	scanf("%d%d%d", &a, &b, &c);
	if (a>=b && a>=c) {
		cout << (b+c>a? 0 : a-(b+c)+1);
	} else if (b>=a && b>=c)
		cout << (a+c>b? 0 : b-(a+c)+1);
	else
		cout << (b+a>c? 0 : c-(b+a)+1);

	return 0;
}
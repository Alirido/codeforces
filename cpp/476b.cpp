/*	
	B. Dreamoon and WiFi
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;
int a[150];
char c;

float f(int x) {
	if (x==0)
		return 1;
	else {
		float result=1;
		while (x > 1) {
			result *= x;
			--x;
		}
		return result;
	}
}

int main() {
	while ((c=getchar()) != '\n')
		a[c]++;
	while ((c=getchar()) != '\n') {
		if (c == '?')
			a[c]++;
		else a[c]--;
	}
	float ans=0.000000;
	if (a['+']<0 || a['-']<0)
		printf("%.11f\n", ans);
	else if (a['+']==0 && a['-']==0)
		printf("%.11f\n", ans+1);
	else {
		if (a['+'] + a['-'] != a['?'])
			printf("%.11f\n", ans);
		else {
			printf("%.11f\n", f(a['?'])/(f(a['+'])*f(a['-'])) / pow(2.0, a['?']));
		}
	}

	return 0;
}
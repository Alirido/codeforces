/*
	A. Professor GukiZ's Robot
	Time limit 0.5 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int x1,y1,x2,y2;
	scanf("%d%d\n%d%d", &x1, &y1, &x2, &y2);
	cout << max(abs(x2-x1), abs(y2-y1));

	return 0;
}
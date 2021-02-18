/*
	B. Blown Garland
	Time limit 1 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;
int n[4];

int main() {
	string s;
	cin >> s;
	int i=0, r=-1,b=-1,y=-1,g=-1;
	while(r==-1 || b==-1 || y==-1 || g==-1) {
		if (s[i]=='R') 
			r=i%4;
		else if (s[i]=='B')
			b=i%4;
		else if (s[i]=='Y')
			y=i%4;
		else if (s[i]=='G')
			g=i%4;
		++i;
	}
	// cout << r << " " << b << " " << y << " " << g << endl;
	for (i=s.length()-1; i>=0; i--) {
		if (s[i]=='!') {
			n[i%4]++;
		}
	}
	printf("%d %d %d %d\n", n[r], n[b], n[y], n[g]);
	return 0;
}
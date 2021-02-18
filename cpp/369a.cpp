/*
	A. Valera and Plates
	Time limit 1 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,b,p;
	scanf("%d%d%d",&n, &b, &p);
	int sum=0;
	while (n--) {
		int x;
		scanf("%d", &x);
		if (b>0 || p>0) {	
			if (x==1) {
				if (b==0) {
					sum++;
				} else b--;
			}
			else {
				if (p==0) {
					if (b==0)
						sum++;
					else
						b--;
				} else p--;
			}
		} else sum++;
	}
	printf("%d\n", sum);

	return 0;
}
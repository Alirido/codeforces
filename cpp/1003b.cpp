/*	
	B. Binary String Constructing
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int one,zero,x;
	scanf("%d%d%d", &zero, &one, &x);
	if (x%2==0) {
		int start = max(zero,one);
		if (start==zero) {
			bool zigzag=true;
			while(x>0) {
				if (zigzag) {
					putchar('0');
					zero--;
					zigzag=false;
				} else {
					putchar('1');
					one--;
					zigzag=true;
				}
				--x;
			}
			for (int i=0; i<one; ++i) putchar('1');
			for (int i=0; i<zero; ++i) putchar('0');
		} else {
			bool zigzag=true;
			while(x>0) {
				if (zigzag) {
					putchar('1');
					one--;
					zigzag=false;
				} else {
					putchar('0');
					zero--;
					zigzag=true;
				}
				--x;
			}
			for (int i=0; i<zero; ++i) putchar('0');
			for (int i=0; i<one; ++i) putchar('1');
		}
	} else {
		int start = min(zero, one);
		if (start==zero) {
			int swp=x/2;
			for (int i=1; i<=zero-swp; i++) putchar('0');
			bool zigzag=true;
			while (swp>0) {
				if (zigzag) {
					putchar('1');
					one--;
					zigzag=false;
				} else {
					putchar('0');
					swp--;
					zigzag=true;
				}
			}
			for (int i=1; i<=one; i++) putchar('1');
		} else {
			int swp=x/2;
			for (int i=1; i<=one-swp; i++) putchar('1');
			bool zigzag=true;
			while (swp>0) {
				if (zigzag) {
					putchar('0');
					zero--;
					zigzag=false;
				} else {
					putchar('1');
					swp--;
					zigzag=true;
				}
			}
			for (int i=1; i<=zero; i++) putchar('0');
		}
	}

	return 0;
}
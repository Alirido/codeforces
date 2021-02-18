/*
	A. Beautiful Year
	Time limit 2s
	Memory Limit 256 MB
*/

#include <iostream>

using namespace std;
/*
bool isBeautifulYear(int n) {
	int a,b,c,d;
	a=-1;
	b=-1;
	c=-1;
	d=-1;
	
	while (n>0) {
		if (d==-1) {
			d=n%10;
		} else {
			if (c==-1) {
				c=n%-1;
			} else {
				if (b==-1) {
					b=n%10;
				} else {
					if (a==-1) {
						a=n%10;
					}
				}
			}
		}
		n=n/10;
	}
	if (a!=b && a!=c && a!=d && b!=c && b!=d && c!=d) {
		return true;
	} else {
		return false;
	}
}
*/
int main() {
	int n;
	int ans, t;
	bool found=false;
	int a,b,c,d;
	
	cin >> n;
	ans = n+1;
	while (!found && ans<=10000) {
		a=-1;
		b=-1;
		c=-1;
		d=-1;
		t=ans;
		while (t>0) {
			if (d==-1) {
				d=t%10;
			} else {
				if (c==-1) {
					c=t%10;
				} else {
					if (b==-1) {
						b=t%10;
					} else {
						if (a==-1) {
							a=t%10;
						}
					}
				}
			}
			t=t/10;
		}
		if (a!=b && a!=c && a!=d && b!=c && b!=d && c!=d) {
			found = true;
		} else {
			ans++;
		}
	}
	cout << ans << endl;
	
	
	return 0;
}

/*	
	A. Space Navigation
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

typedef long long ll;

int main() {
	fast_io;
	int t;
	cin >> t;
	while (t--) {
		int x, y;
		cin >> x >> y;
		string s;
		cin >> s;
		int ln = s.length();
		int u = 0, d = 0, l = 0, r = 0;
		for (int i=0; i<ln; i++) {
			switch (s[i]) {
				case 'U':
					u++;
					break;
				case 'D':
					d++;
					break;
				case 'L':
					l++;
					break;
				default:
					r++;
			}
		}
		if (x >= 0) {
			if (y >= 0) {
				if (r >= x && u >= y)
					printf("YES\n");
				else
					printf("NO\n");
			} else {
				if (r >= x && d >= (-1*y))
					printf("YES\n");
				else
					printf("NO\n");
			}
		} else {
			if (y >= 0) {
				if (l >= (-1*x) && u >= y)
					printf("YES\n");
				else
					printf("NO\n");
			} else {
				if (l >= (-1*x) && d >= (-1*y))
					printf("YES\n");
				else
					printf("NO\n");
			}
		}
	}

	return 0;
}


/*
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int _t;
    cin >> _t;
 
    while (_t--) {
        int p, q;
        cin >> p >> q;
 
        string s;
        cin >> s;
 
        int n = s.size();
 
        for (int i = 0; i < n; i++) {
            if (s[i] == 'R') {
                if (p > 0) {
                    p--;
                }
            } else if (s[i] == 'L') {
                if (p < 0) {
                    p++;
                }
            } else if (s[i] == 'U') {
                if (q > 0) {
                    q--;
                }
            } else {
                if (q < 0) {
                    q++;
                }
            }
        }
 
        cout << (p == 0 && q == 0 ? "YES" : "NO") << endl;
    }
}
*/
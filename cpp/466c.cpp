/*	
	C. Number of Ways
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	long long dp[n+1]; dp[0] = 0;
	int a[n];
	for (int i=0; i<n; i++) {
		scanf("%d", &a[i]);
		dp[i+1] = dp[i] + a[i];
	}
	if (dp[n] % 3 != 0) {
		printf("0\n");
	} else {
		long long tsum=0, part1 = dp[n]/3, part2 = 2*dp[n]/3, ans=0, cnt=0;
		for (int i=1; i<n; i++) {
			if (dp[i] == part2) {
				ans += cnt;
			}
			if (dp[i] == part1) {
				cnt++;
			}
		}
		cout << ans << endl;
	}
	/*else if (sum == 0) {
		unsigned long long tsum=0, nway=0;
		for (int i=0; i<n-1; i++) {
			tsum += a[i];
			if (tsum == 0) {
				nway++;
			}
		}
		cout << nway*(nway-1)/2 << endl;
	} else {
		sum /= 3;
		int i=0;
		unsigned long long tsum=0, iway=0, jway=0;
		while (tsum != sum && i<n-2) {
			tsum += a[i];
			i++;
		}
		if (i==n-2) {
			printf("0\n");
		} else {
			iway++;
			tsum = 0;
			while (tsum != sum && i<n-1) {
				tsum += a[i];
				if (tsum == 0) {
					iway++;
				}
				i++;
			}
			if (i == n-1) {
				printf("0\n");
			} else {
				jway++;
				tsum = 0;
				while (i<n-1) {
					tsum +=  a[i];
					if (tsum == 0) {
						jway++;
					}
					i++;
				}
				cout << iway*jway << endl;
			}
		}
	}*/

	return 0;
}
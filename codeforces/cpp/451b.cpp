/*
	B. Sort the Array
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;
int n;
int start, end;

void cekLong(int a[], int start, int *ends) {
	bool reversed = false;
	while (!reversed && start<n-1) {
		if (a[start+1]<a[start]) {
			start++;
		} else {
			*ends = start;
			reversed = true;
		}
	}
	if (start == n-1) {
		*ends = start;
	}
}

int main() {
	scanf("%d", &n);
	int a[n];
	for (int i=0; i<n; i++) {
		scanf("%d", &a[i]);
	}
	bool sorting=true, sekali=false;
	int i=1;
	while (sorting && i<n) {
		if (a[i]<a[i-1]) {
			if (!sekali) {
				start = i-1;
				cekLong(a, start, &end);
				if (end == n-1) {
					if (start == 0) {
						i=n;
					} else {
						if (a[start-1]>a[end]) {
							sorting = false;
						} else {
							i=n;
						}
					}
				} else {
					if (start == 0) {
						if (a[start]>a[end+1]) {
							sorting = false;
						} else {
							i = end + 2;
						}
					} else {
						if (a[start-1]>a[end] || a[start]>a[end+1]) {
							sorting = false;
						} else {
							i=end+2;
						}
					}
				}
				sekali = true;
			} else {
				sorting = false;
			}
		} else {
			i++;
		}
	}
	if (sorting) {
		printf("yes\n");
		printf("%d %d\n", start+1, end+1);
	} else {
		printf("no\n");
	}

	return 0;
}
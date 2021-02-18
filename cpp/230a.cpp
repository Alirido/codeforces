/*
	A. Dragon
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;
struct dragon {
	int stg;
	int exp;
} a[1001];

void swap(dragon& a, dragon& b) {
	int temp1=a.stg;
	a.stg=b.stg;
	b.stg=temp1;
	
	int temp2=a.exp;
	a.exp=b.exp;
	b.exp=temp2;
}

int main() {
	int s, n, i;
	
	scanf("%d %d", &s, &n);
	for (i=0; i<n; i++) {
		scanf("%d %d", &a[i].stg, &a[i].exp);
		int j=i;
		while (j>0 && a[j].stg<a[j-1].stg) {
			swap(a[j], a[j-1]);
			j--;
		}
	}
	bool win=true;
	i=0;
	while (i<n && win) {
		if (s>a[i].stg) {
			s=s+a[i].exp;
			i++;
		} else {
			win=false;
		}
	}
	if (win) {
		printf("YES\n");
	} else {
		printf("NO\n");
	}
	
	return 0;
}

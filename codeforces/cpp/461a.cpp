/*	
	A. Appleman and Toastman
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	int a[n];
	unsigned long long sum=0;
	for (int i=0; i<n; i++) {
		scanf("%d", &a[i]);
		sum += a[i];
	}
	sort(a, a+n);
	if (n==1)
		cout << sum << endl;
	else if (n==2)
		cout << sum+sum << endl;
	else {
		unsigned long long temp=sum;
		sum += temp;
		for (int i=0; i<n-2; i++) {
			temp -= a[i];
			sum += temp;
		}
		cout << sum << endl;
	}

	return 0;
}
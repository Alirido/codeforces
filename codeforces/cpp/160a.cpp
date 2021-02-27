/*
	A. Twins
	Time limit 2s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>


using namespace std;

int main() {
	int n, i, sum;
	float takecoin; 
	int a[101];
	
	cin >> n; sum = 0;
	for (i=0; i<=n-1; i++) {
		cin >> a[i];
		sum = sum + a[i];
	}
	sort(a, a+n, greater<int>());
	takecoin = 0; i = 0;
	while (takecoin <= (sum/2.0) && i<=n-1) {
		takecoin = takecoin + a[i];
		i++;
	}
	cout << i << endl;
	
	return 0;
}

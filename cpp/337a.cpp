/*
	A. Puzzles
	Time limit 1s
	Memory Limit 256 MB
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, m, i;
	int a[51];
	cin >> n >> m;
	for (i=0; i<=m-1; i++) {
		cin >> a[i];
	}
	sort(a, a+m);
	int min=1005;
	for (i=n-1; i<=m-1; i++) {
		if ((a[i]-a[i-n+1]) < min) {
			min = a[i]-a[i-n+1];
		}
	}
	cout << min << endl;
	
	return 0;
}
			

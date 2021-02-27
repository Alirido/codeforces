/*	
	B. Cutting
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;
int a[101];

int main() {
	int n, b;
	scanf("%d%d", &n, &b);
	for (int i=0; i<n; i++)
		scanf("%d", &a[i]);
	int odd=0, even=0;
	vector<int> v;
	for (int i=0; i<n-2;++i) {
		if (a[i]%2==0)
			even++;
		else odd++;
		if (even==odd)
			v.push_back(abs(a[i+1]-a[i]));
	}
	sort(v.begin(), v.end());
	int ans=0, i=0;
	while (b>0 && i<v.size()) {
		if (b>=v[i]) {
			ans++;
		}
		b-=v[i];
		i++;
	}
	printf("%d\n", ans);

	return 0;
}
/*
	C. Soldier and Cardsd
	Time limit 2 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	int k1,k2, x;
	vector<int> v1, v2, first1, first2;
	scanf("%d", &k1); 
	while(k1--) {
		scanf("%d", &x);
		v1.push_back(x);
		first1.push_back(x);
	}
	scanf("%d", &k2);
	while(k2--) {
		scanf("%d", &x);
		v2.push_back(x);
		first2.push_back(x);
	}
	int ans=0;
	bool can=true;
	while (can && !v1.empty() && !v2.empty()) {
		if (v1[0]>v2[0]) {
			v1.push_back(v2[0]);
			v1.push_back(v1[0]);
		} else {
			v2.push_back(v1[0]);
			v2.push_back(v2[0]);
		}
		ans++;
		v1.erase(v1.begin());
		v2.erase(v2.begin());
		if ((v1==first1 && v2==first2) || ans>106)
			can=false;
	}
	if (can) 
		printf("%d %d\n", ans, (v1.empty()? 2 : 1));
	else printf("-1\n");

	return 0;
}
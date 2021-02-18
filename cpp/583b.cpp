/*
	B. Robot's Task
	Time limit 1 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	vector<int> v;
	while(n--) {
		int x;
		scanf("%d", &x);
		v.push_back(x);
	}
	bool right=true;
	int info=0, ans=0;
	while (v.size()!=0) {
		if (right) {
			auto it = v.begin();
			for (; it!=v.end();) {
				if (*it<=info) {
					info++;
					it = v.erase(it);
				} else ++it;
			}
			right=false; ans++;
		} else {
			auto it=v.end();
			for (--it; it!=v.begin();) {
				if (*it <= info) {
					info++;
					it = v.erase(it);
				} 
				--it;
			}
			if (*it <= info) {
				info++;
				it = v.erase(it);
			}
			right=true; ans++;
		}
	}
	printf("%d\n", ans-1);

	return 0;
}
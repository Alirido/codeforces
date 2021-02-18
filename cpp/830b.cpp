 /*
	B. Cards Sorting
	Time limit 1 s
	Memory limit 256Mb
*/

#include <bits/stdc++.h>

using namespace std;
// vector<pair<int,int>> v;
int current;
unsigned long long ans;
vector<int> exist;

void find(int ite) {
	int n=exist.size();
	ans++;
	current %=n;
	while (exist[current]!=ite) {
		current = (current+1)%n;
		ans++;
	}
	// cout << ans << endl;
	auto tempit = exist.cbegin();
	tempit += current;
	exist.erase(tempit);
}
// bool cmp(pair<int, int> v1, pair<int, int> v2) {
// 	if (v1.first==v2.first)
// 		return v1.second<v2.second;
// 	return v1.first<v2.first;
// }

int main() {
	int n;
	scanf("%d", &n);
	map<int,int> m;
	while (n--) {
		int x;
		scanf("%d", &x);
		m[x]++;
		exist.push_back(x);
	}
	auto it = m.cbegin();
	// cout << "Flow value of answer:" << endl;
	for (; it!=m.cend(); it++) {
		int i=it->second;
		while (i > 0) {
			int temp = it->first;
			find(temp);
			i--;
		}
	}
	cout << ans;

	return 0;
}
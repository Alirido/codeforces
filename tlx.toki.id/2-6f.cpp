/*
	Course 2 Pemrograman Kompetitif Dasar
	Chapter 6: Greedy
	F. Nomor Kandang
	Time limit 1 s
	Memory limit 64 MB
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
int n;
vector<pair<int, ll> > plat;
stack<int> front, end;
queue<int> tFront;

bool cmp(pair<int, ll> a, pair<int, ll> b) {
	if (a.second < b.second)
		return true;
	else if (a.second == b.second)
		return a.first < b.first;
	else
		return false;
}

void checkkSameValue(int *idx) {
	if (idx < n) {
		while (plat[idx].second == plat[idx+1].second && idx < n-1) idx++;
		if (plat[idx].second == plat[idx+1].second)
			idx++;
	}
}

void printResult(int idx, ll tempCount, ll count) {
	if (count >= 50) {


	}
}

void calculate(int idx, ll remains, ll count) {
	if (remains == 0) {

	} else {

	}
}

int main() {
	
	scanf("%d", &n);
	// ll arr[n+1][2];
	
	for (int i=0; i<=n; i++) {
		// scanf("%lld", &arr[i][0]);
		// arr[i][1]=i;
		ll x;
		scanf("%lld", &x);
		plat.push_back(make_pair(i, x));
	}
	ll m;
	scanf("%lld", &m);
	sort(plat.begin(), plat.end(), cmp);

	// executing
	int idx=0;
	checkkSameValue(&idx);
	ll count = m/plat[idx].second;
	ll remains = m%plat[idx].second;
	while (remains >= 0 && idx <= n) {
		if (remains == 0) {
			if (plat[idx].first != 0) {
				if (count >= 50) {
					for (int i=0; i<50; i++)
						printf("%d", idx);
					printf("\n");
					for (int i=0; i<50; i++)
						printf("%d", idx);
				} else {
					for (int i=0; i<count; i++)
						printf("%d", idx);
					printf("\n");
					for (int i=0; i<count; i++)
						printf("%d", idx);
				}
			} else {
				if (count>=2) {
					remains += 2 * plat[idx].second;
					count -= 2;
					int idx2 = idx+1;
					while (remains >= plat[idx2].second && idx2 < n) idx2++;
					if (remains < plat[idx2].second)
						idx2--;
					ll tempCount = remains/plat[idx2].second;
					remains = remains%plat[idx2].second;

					if (remains == 0){
						printResult(idx, tempCount, count);
					}
				}
			}
		}
	}


	/*ll count=0;
	vector<int> front;
	queue<int> end;
	for (int i=n; i>=0; i--) {
		int plat = m/arr[i];
		int tmp = plat;
		if (count > 50) {
			while (tmp>0) {
				end.pop();
				end.push(i);
				tmp--;
			}
		} else {
			while (front.size() < 50 && tmp>0) {
				front.push_back(i);
				end.push(i);
				tmp--;
			}
			while (tmp > 0) {
				if (end.size() >= 50)
					end.pop();
				end.push(i);
				tmp--;
			}
		}
		count += plat;
		m = arr[i]%m;
	}
	printf("%lld\n", count);
	for (auto i = front.begin(); i != front.end(); ++i) {
		printf("%d", *i);
	}
	printf("\n");
	while (!end.empty()){
		printf("%d", end.front());
		end.pop();
	}*/

	return 0;
}
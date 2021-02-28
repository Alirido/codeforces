/*
	Course 2 Pemrograman Kompetitif Dasar
	Chapter 5: Divide and Conquer
	A. Parsel Telur Bebek
	Time limit 1 s
	Memory limit 32 MB
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll n, m, maxValue=0;
vector<ll> v;

ll count(ll value) {
	ll i=0;
	ll sum=0;
	while (sum<=m && i<n) {
		sum += value/v[i];
		i++;
	}
	return sum;
}

ll highest(ll left, ll right) {
	if (left > right) {
		return right;
	}
	ll mid = (right+left)/2;
	if (count(mid) > m) {
		return highest(left, mid-1);
	} else {
		return highest(mid+1, right);
	}
}

ll lowest(ll left, ll right) {
	if (left > right) return left;
	ll mid = (right+left)/2;

	if (count(mid) >= m) {
		return lowest(left, mid-1);
	} else {
		return lowest(mid+1, right);
	}
}

int main() {
	scanf("%lld %lld\n", &n, &m);
	for (ll i=0; i<n; i++) {
		ll x; scanf("%lld", &x);
		v.push_back(x);
		if (maxValue < x) {
			maxValue = x;
		}
	}
	printf("%lld\n", highest(0, maxValue*m)-lowest(0, maxValue*m)+1);

	return 0;
}
/*	
	B. Kefa and Company
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, d;
	scanf("%d%d", &n, &d);
	map<int, unsigned long long> m;
	for (int i=0; i<n; ++i) {
		unsigned long long a,b;
		// scanf("%d%d", &a, &b);
		cin >> a >> b;
		m[a]+=b;
	}
	auto back = m.cbegin();
	auto front = m.cbegin();
	++back;
	unsigned long long max=front->second, sum=front->second;
	while (back != m.cend()) {
		if (front==back) {
			sum += front->second;
			if (sum>max)
				max = sum;
			back++;
		} else {
			if (back->first - front->first >= d) {
				sum -= front->second;
				front++;
			} else {
				sum += back->second;
				if (sum>max)
					max=sum;
				back++;
			}
		}
	}
	cout << max << endl;

	return 0;
}
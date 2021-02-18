/*
	A. Tanya and Stairways
	Time limit 1 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	vector<int> v;
	int x,temp=1;
	scanf("%d", &x);
	temp=x;
	n--;
	while (n--) {
		scanf("%d", &x);
		if (x==1) {
			v.push_back(temp);
			temp=1;
		} else {
			temp=x;
		}
	}
	v.push_back(temp);
	cout << v.size() << endl;
	for (int i=0; i<v.size(); ++i)
		printf("%d ", v[i]);

	return 0;
}
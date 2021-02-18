/*
	A. Array
	Time limit 2 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	vector<int> neg;
	vector<int> pos;
	vector<int> nol;
	while(n--) {
		int x;
		scanf("%d", &x);
		if (x<0)
			neg.push_back(x);
		else if (x==0)
			nol.push_back(x);
		else
			pos.push_back(x);
	}
	if (neg.size()%2==0) {
		nol.push_back(neg.front());
		neg.erase(neg.begin());
	}
	if (pos.empty()) {
		pos.push_back(neg[0]);
		pos.push_back(neg[1]);
		neg.erase(neg.begin());
		neg.erase(neg.begin());
	}
	cout << neg.size() << " "; for (int i=0; i<neg.size(); ++i) printf("%d ", neg[i]);
	printf("\n");
	cout << pos.size() << " "; for (int i=0; i<pos.size(); ++i) printf("%d ", pos[i]);
	printf("\n");
	cout << nol.size() << " "; for (int i=0; i<nol.size(); ++i) printf("%d ", nol[i]);
	
	return 0;
}
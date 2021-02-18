/*	
	A. Toy Cars
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;
vector<int> v;

int main() {
	int n;
	scanf("%d", &n);
	int goodCars=0;
	for (int i=0; i<n; ++i) {
		bool isGoodCar=true;
		for (int j=0; j<n; ++j) {
			int x;
			scanf("%d", &x);
			if (x==1 || x==3)
				isGoodCar=false;
		}
		if (isGoodCar) {
			goodCars++;
			v.push_back(i+1);
		}
	}
	printf("%d\n", goodCars);
	for (int i=0; i<v.size(); ++i)
		printf("%d ", v[i]);

	return 0;
}
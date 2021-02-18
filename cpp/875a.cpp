/*	
	A. Classroom Watch
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int countDigit(int x) {
	if (x<10)
		return 1;
	else if (x<100)
		return 2;
	else if (x<1000)
		return 3;
	else if (x<10000)
		return 4;
	else if (x<100000)
		return 5;
	else if (x<1000000)
		return 6;
	else if (x<10000000)
		return 7;
	else if (x<100000000)
		return 8;
	else return 9;

	// int m=10,result=1;
	// while (x>=m) {
	// 	m*=10;
	// 	result++;
	// }
}

int sumDigit(int x) {
	int result=0;
	while (x>0) {
		result += x%10;
		x/=10;
	}
	return result;
}

int main() {
	int n;
	scanf("%d", &n);
	int digit = countDigit(n);
	int k=0;
	vector<int> ans;
	for (int i=digit*9; i>0; i--) {
		if ((n-i)+sumDigit(n-i)==n) {
			k++;
			ans.push_back(n-i);
		}
	}
	printf("%d\n", k);
	for (int i=0; i<ans.size(); i++)
		printf("%d\n", ans[i]);

	return 0;
}
/*	
	C. Classy Numbers
	Time limit 3 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

long long count(string s) {
	long long result=0, n=s.length(),temp;
	int i=1;
	if (n>=3) {
		// xxx
		result += ((n-1) + 9*(n-1)*(n-2)/2 + 9*9*(n-1)*(n-2)*(n-3)/6)*9;
		temp = ((n-1) + 9*(n-1)*(n-2)/2)*9;
		result += ((s[0]-'0')-1)*temp + (s[0]-'0');
		// xx
		while (s[i]=='0' && i<n) i++;
		if (i<n-1) {
			result += (n-i-1 + 9*(n-i-1)*(n-i-2)/2)*9;
			temp = (n-i-1)*9;
			result += ((s[i]-'0')-1)*temp + (s[i]-'0');
			i++;
			while (s[i]=='0' && i<n) i++;
			if (i<n)
				result += (s[i]-'0') + (n-i-1)*9;
		} else if (i<n) result += (s[i]-'0');
	} else {
		for (int i=0; i<n; i++)
			result = result*10 + (s[i]-'0');
	}

	return result;
}

bool co(string s) {
	int temp=0;
	for (int i=0; i<s.length(); i++) {
		if (s[i]>'0')
			temp++;
	}
	return (temp<=3);
}

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		string l,r;
		cin >> l >> r;
		cout << count(r)-count(l)+(co(l)? 1 : 0) << endl;
	}

	return 0;
}
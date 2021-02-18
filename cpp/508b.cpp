/*	
	B. Anton and currency you all know
	Time limit 0.5 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;
string s;

void swap(int i, int j) {
	char temp = s[i];
	s[i]=s[j];
	s[j]=temp;
}

int main() {
	cin >> s;
	bool swapping=false; int i=0, n=s.length(), save=-1;
	while (!swapping && i<n-1) {
		if ((s[i]-'0')%2 == 0) {
			if (s[i]<s[n-1]) {
				swap(i, n-1);
				swapping=true;
			} else {
				save = i;
			}
		}
		++i;
	}
	if (!swapping) {
		if (save > -1)
			swap(save, n-1);
		else { 
			puts("-1");
			return 0;
		}
	}
	cout << s << endl;

	return 0;
}
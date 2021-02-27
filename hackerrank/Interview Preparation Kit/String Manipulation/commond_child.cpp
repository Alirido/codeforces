#include <bits/stdc++.h>
using namespace std;

int main() {
	string s1, s2;
	cin >> s1;
	cin >> s2;
	int ln = s1.length();
	int longest = 0;
	for (int i=0; i<ln; i++) {
		int tmp = 0;
		int pointer1 = i;
		int pointer2 = 0;
		for (int j=pointer2; j<ln; j++) {
			if (s1[pointer1] == s2[j]) {
				tmp++;
				pointer1++;
				pointer2 = j+1;
			}
		}
		if (pointer1 > i) {
			for (int j=pointer1; j<ln; j++) {
				for (int k=pointer2; k<ln; k++) {
					if (s1[j] == s2[k]) {
						tmp++;
						pointer2 = k+1;
						j++;
					}
				}
			}
		}
		if (tmp > longest)
			longest = tmp;
	}
	printf("%d\n", longest);
	return 0;
}
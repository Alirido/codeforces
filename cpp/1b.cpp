/*	
	B. Spreadsheets
	Time limit 10 s
	Memory Limit 64 MB
*/

#include <bits/stdc++.h>

using namespace std;
char c;
string s;

int sti(int a, int b) { // Convert string to int
	int result = 0;
	for (int i=a; i<b; i++) {
		result = result*10 + (s[i]-'0');
	}
	return result;
}

int main() {
	int n;
	scanf("%d\n", &n);
	while (n--) {
		int i=0, split=0;
		while((c=getchar()) != '\n') {
			s[i++] = c;
			if (s[i-2]<='9' && s[i-2]>='0' && c == 'C') 
				split = i-1;
		}
		if (split) {
			int temp = sti(split+1, i);
			i = split;
			while (temp>0) {
				c = (temp%26) - 1 + 'A';
				if (c<'A') {
					temp--;
					c = 'Z';
				}
				s[++i] = c;
				temp /= 26;
			}
			for (int j=i; j>split; --j) {
				putchar(s[j]);
			}
			for (int j=1; j<split; ++j) {
				putchar(s[j]);
			}putchar('\n');
		} else {
			while(s[++split] > '9');
			putchar('R');
			for (int j=split; j<i; ++j) {
				putchar(s[j]);
			}
			int col=0, multi=1; 
			for (--split; split>=0; --split) {
				col += (s[split]-'A'+1)*multi;
				multi *= 26;
			}
			printf("C%d\n", col);
		}
	}
	return 0;
}
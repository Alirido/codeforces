 /*
	B. Text Document Analysis
	Time limit 1 s
	Memory limit 256Mb
*/

#include <bits/stdc++.h>

using namespace std;
char c;

int main() {
	int n;
	scanf("%d\n", &n);
	string s;
	int max=0,temp=0, wordin=0;
	bool in=false;
	while ((c=getchar()) != '\n') {
		if (!in) {
			if ((c>='a' && c<='z') || (c>='A' && c<='Z'))
				temp++;
			else { 
				temp=0;
				if (c=='(')
					in=true;
			}
			if (max<temp)
				max=temp;
		} else {
			if ((c>='a' && c<='z') || (c>='A' && c<='Z'))
				temp++;
			else {
				if (temp>0) wordin++; 
				temp=0;
				if (c==')')
					in=false;
			}
		}
	}
	printf("%d %d\n", max, wordin);

	return 0;

}
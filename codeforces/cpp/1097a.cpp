/*	
	A. Gennady and a Card Game
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	char s[2];
	scanf("%s", s);
	getchar();
	bool isPlay = false;
	for (int i=0; i<5; i++) {
		char x[2];
		scanf("%s", x);
		getchar();
		if (s[0] == x[0] || s[1] == x[1])
			isPlay = true;
	}
	if (isPlay)
		printf("YES\n");
	else
		printf("NO\n");

	return 0;
}
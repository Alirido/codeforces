/*
	A. A and B and Chess
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	string s[8];
	int white=0, black=0;
	for (int i=0; i<8; i++) {
		cin >> s[i];
		for (int j=0; j<8; j++) {
			if (s[i][j]=='Q') {
				white+=9;
			} else if (s[i][j] == 'R') {
				white += 5;
			} else if (s[i][j] == 'B') {
				white += 3;
			} else if (s[i][j] == 'N') {
				white += 3;
			} else if (s[i][j] == 'P') {
				white += 1;
			} else if (s[i][j] == 'q') {
				black += 9;
			} else if (s[i][j] == 'r') {
				black += 5;
			} else if (s[i][j] == 'b') {
				black += 3;
			} else if (s[i][j] == 'n') {
				black += 3;
			} else if (s[i][j] == 'p') {
				black += 1;
			}
		}
	}
	if (white==black) {
		printf("Draw\n");
	} else if (white>black) {
		printf("White\n");
	} else {
		printf("Black\n");
	}

	return 0;
}
/*
	Course 2 Pemrograman Kompetitif Dasar
	Chapter 4: Brute Force
	B. Grup Match
	Time limit 1 s
	Memory limit 64 MB
*/

#include <bits/stdc++.h>
using namespace std;

bool isPossible(int p1, int p2, int n, int *score, int *possibleScore) {
	if (p2 == n) {
		p1++;
		p2 = p1 + 1;
	}
	if (p1 == n-1) {
		bool possible = true;
		int i=0;
		while (possible && i<n) {
			if (score[i] != possibleScore[i]) {
				possible = false;
			}
			i++;
		}
		return possible;
	}

	int tempScore[n];
	copy(possibleScore, possibleScore+n, tempScore);

	// Win
	tempScore[p1] += 3;
	bool win = isPossible(p1, p2+1, n, score, tempScore);
	tempScore[p1] -= 3;

	// Lose
	tempScore[p2] += 3;
	bool lose = isPossible(p1, p2+1, n, score, tempScore);
	tempScore[p2] -= 3;

	// Draw
	tempScore[p1] += 1;
	tempScore[p2] += 1;
	bool draw = isPossible(p1, p2+1, n, score, tempScore);

	return win || lose || draw;
}

int main() {
	int t, i;
	int n;
	scanf("%d", &t);
	for (i=0; i<t; i++) {
		scanf("%d", &n);
		int arr[n];
		int sum = 0;
		for (int j=0; j<n; j++) {
			scanf("%d", &arr[j]);
			sum += arr[j];
		}
		if (sum > (n*(n-1)/2 * 3) || sum < (n*(n-1)/2 * 2)) {
			printf("%s\n", "NO");
		} else {
			int possibleScore[n] = { 0 };
			if (isPossible(0, 1, n, arr, possibleScore)) {
				printf("%s\n", "YES");
			} else {
				printf("%s\n", "NO");
			}	
		}
	}
	return 0;
}
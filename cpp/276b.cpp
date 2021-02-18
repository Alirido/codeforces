/*
	B. Little Girld and Game
	Time limit 2 s
	Memory limit 256 Mb
*/

#include <bits/stdc++.h>

using namespace std;
char c;
int n;

int main() {
	map<char, int> m;
	while ((c=getchar()) != '\n') {
		m[c]++;
		n++;
	}
	if (n%2==1) {
		int odd=0;
		auto it=m.cbegin();
		while (odd<2 && it!=m.cend()) {
			if (it->second%2==1)
				odd++;
			it++;
		}
		if (odd==1)
			puts("First");
		else {
			if (n%2==0)
				puts("Second");
			else puts("First");
		}
	} else {
		int odd=0;
		auto it=m.cbegin();
		while (odd<1 && it!=m.cend()) {
			if (it->second%2==1)
				odd++;
			it++;
		}
		if (odd==0)
			puts("First");
		else {
			if (n%2==0)
				puts("Second");
			else puts("First");
		}
	}

	return 0;
}
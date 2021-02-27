/*	
	A. Winner
	Time limit 1 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d\n", &n);
	map<string, int> m;
	vector<pair<string,int>> v;
	for (int i=0; i<n; ++i) {
		string s;
		int x;
		cin >> s >> x;
		v.push_back(make_pair(s, x));
		m[s]+=x;
	}

	// Finding Maximum points at the end of the game
	int win=-1;
	for (auto elem : m) {
		if (elem.second>win)
			win = elem.second;
	}

	// Select some players with maximum points
	map<string, bool> player;
	for (auto elem : m) {
		if (elem.second==win)
			player[elem.first]=true;
	}

	// Choose the winner (the maximum one and the first reached point)
	string winner="ALIRIDO"; bool stop=false;
	map<string, int> temp; int i=0;
	while (winner == "ALIRIDO" && i<v.size()) {
		temp[v[i].first] += v[i].second;
		if (temp[v[i].first]>=win) {
			if (player[v[i].first])
				winner = v[i].first;
		}
		++i;
	}
	cout << winner << endl;

	return 0;
}
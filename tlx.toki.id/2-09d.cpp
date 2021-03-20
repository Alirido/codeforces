/*
	Course 2 Pemrograman Kompetitif Dasar
	Chapter 9: Perkenalan Graf
	D. Jalan Tol Menuju Roma
	Time limit 1 s
	Memory limit 16 MB
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<int> road[501], tolls[501];
bool isVisited[501][2];

int bfs(int from, int to) {
	int dist[501][2];
	for (int i=0; i<501; i++) {
		dist[i][0] = INT_MAX;
		dist[i][1] = INT_MAX;
	}
	queue<pair<int, int> > q;
	q.push({from, 0});
	dist[from][0] = 0;
	isVisited[from][0] = true;
	bool found = false;
	int count = 0;
	while(!q.empty() && !found) {
		pair<int, int> current = q.front();
		q.pop();
		for (auto next : road[current.first]) {
			if (!isVisited[next][current.second]) {
				q.push({next, current.second});
				dist[next][current.second] = dist[current.first][current.second] + 1;
				isVisited[next][current.second] = true;
				if (next == to)
					found = true;
			}
		}
		if (current.second == 0) {
			for (auto toll : tolls[current.first]) {
				if (!isVisited[toll][1]) {
					q.push({toll, 1});
					dist[toll][1] = dist[current.first][current.second] + 1;
					isVisited[toll][1] = true;
					if (toll == to)
						found = true;
				}
			}
		}
	}
	return min(dist[to][0], dist[to][1]);
}

int main() {
	int n, l, t, from, to;
	scanf("%d %d %d %d %d", &n, &l, &t, &from, &to);

	if (from == to) return printf("0\n"), 0;

	for (int i=0; i<l; i++) {
		int x, y;
		scanf("%d %d", &x, &y);
		road[x].push_back(y);
		road[y].push_back(x);
	}
	for (int i=0; i<t; i++) {
		int x, y;
		scanf("%d %d", &x, &y);
		tolls[x].push_back(y);
		tolls[y].push_back(x);
	}

	printf("%d\n", bfs(from, to));

	return 0;
}
/*
	B. A and B and Compilation Errors
	Time limit 2 s
	Memory Limit 256 MB

	Using data structures list
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	list<int> l1;
	for (int i=0; i<n; i++) {
		int x;
		cin >> x;
		l1.push_back(x);
	}
	//Second Compilation
	list<int> l2(l1);
	for (int i=0; i<n-1; i++) {
		int x;
		cin >> x;
		list<int>::iterator it = find(l2.begin(), l2.end(), x);
		l2.erase(it);
	}
	cout << l2.front() << endl;
	list<int>::iterator it = find(l1.begin(), l1.end(), l2.front());
	l1.erase(it);
	//Third Compilation
	for (int i=0; i<n-2; i++) {
		int x;
		cin >> x;
		list<int>::iterator it = find(l1.begin(), l1.end(), x);
		l1.erase(it);
	}
	cout << l1.front() << endl;

	return 0;
}
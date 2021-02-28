/* medium */

#include <iostream>
#include <string>
using namespace std;
string n, k;

string MinWindowSubstring(string n, string k) {
	int lnn = n.length();
	int lnk = k.length();
	int nmap[257] = { 0 };
	int kmap[257] = { 0 };
	for (int i=0; i<lnn; i++) {
		nmap[n[i]]++;
	}
	for (int i=0; i<lnk; i++) {
		kmap[k[i]]++;
	}
	int left = 0;
	int right = lnn-1;
	bool isValid = true;
	while (isValid && left <= right) {
		// if left remove:
		if (kmap[left] > 0) {
			if (nmap[left] > kmap[left]) {
				nmap[left]--;
				left++;
			} 
		}
	}
}

int main() {
	cin >> n;
	cin >> k;
	cout << MinWindowSubstring(n, k) << endl;

	return 0;
}	
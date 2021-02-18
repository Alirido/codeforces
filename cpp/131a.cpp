/*
	A. cAPS lOCK
	Time limit 0.5s
	Memory Limit 256 MB
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
	string a;
	
	cin >> a;
	// Pengecekan apa perlu diubah atau tidak
	bool change = true;
	int i = 0;
	while (i<=a.length()-1 && change) {
		if (i > 0) {
			if (a[i] >= 'a' && a[i] <= 'z') {
				change = false;
			}
		}
		i++;
	}
	//Pengubahan
	if (change) {
		for (i = 0; i <= a.length()-1; i++) {
			if (a[i]>='a' && a[i]<='z') {
				a[i] = a[i] - ('z'-'Z');
			} else {
				a[i] = a[i] - ('Z'-'z');
			}
		}
	}
	cout << a << endl;
	
	return 0;
}
			

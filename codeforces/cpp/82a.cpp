/*
	A. Double Cola
	Time limit 1s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	//Cara treza
	int N;
	string arr[5] = {"Sheldon","Leonard","Penny","Rajesh","Howard"};
	scanf("%d",&N);
	int n = floor(log(1+(float)(N-1)/5)/log(2));
	int sn = 5*((1<<n)-1);
	cout << arr[(n==0)? N-1: ((N-sn-1)/(1<<n))] << endl;
 
 
/*
 * Cara Rido
	int n, nlimit;
	int sn;

	cin >> n;
if (n<=5) {
	switch (n) {
		case 1:	cout << "Sheldon" << endl; break;
		case 2:	cout << "Leonard" << endl; break;
		case 3: cout << "Penny" << endl; break;
		case 4: cout << "Rajesh" << endl; break;
		default: cout << "Howard" << endl;
	}
} else {
	nlimit= floor(log((n/5.0) + 1)/log(2));
	//cout << nlimit << endl;
	sn= 5*((1 << nlimit)-1);
	//cout << sn << endl;
	if (sn==n) {
		cout << "Howard" << endl;
	} else {
		n=n-sn;
		if (n%(1 << nlimit)==0) {
			switch (n/(1 << nlimit)) {
				case 1:	cout << "Sheldon" << endl; break;
				case 2:	cout << "Leonard" << endl; break;
				case 3: cout << "Penny" << endl; break;
				case 4: cout << "Rajesh" << endl; break;
				default: cout << "Howard" << endl;
			}
		} else {
			switch (n/(1 << nlimit)) {
				case 0:	cout << "Sheldon" << endl; break;
				case 1:	cout << "Leonard" << endl; break;
				case 2: cout << "Penny" << endl; break;
				case 3: cout << "Rajesh" << endl; break;
				default: cout << "Howard" << endl;
			}
		}
	}
}
*/
	return 0;
}

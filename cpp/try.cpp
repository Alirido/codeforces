#include <bits/stdc++.h>

using namespace std;
int a[4][4];
int main() {
	int i,j;
	for(i=0;i<4;i++)
	for(j=0;j<4;j++)
	a[i][j]=i!=j;

	for(i=0;i<4;i++) {
		for(j=0;j<4;j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
	cout << endl;
	for(int p=4;p;p>>=1,printf("%d\n", p))
	if(p&1)
	cout << "Masuk sini p=" << p << endl;
	return 0;
}
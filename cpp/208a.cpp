/*
	A. Dubstep
	Time limit 2s
	Memory Limit 256 MB
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	
	getline(cin, s);
	while (s.find("WUB") != s.npos) {
		/* Pemakaian fungsi find: jika tidak menemukan
		 * kata yg dicari pada string maka akan mengembalikan
		 * npos.
		 */
		if (s.find("WUB")==0 || s.rfind("WUB")==s.length()-1) {
			s.erase(s.find("WUB"), 3);
		} else {
			size_t temp=s.find("WUB");
			if (s.find("WUB", temp+2)==s.find("WUB",0)+3) {
				s.erase(s.find("WUB"), 3);
			} else {
				s.replace(s.find("WUB"), 3, " ");
			}
		}
	}
	cout << s << endl;
	
	return 0;
}

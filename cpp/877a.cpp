/*
	A. Alex and broken contest
	Time limit 2 s
	Memory Limit 256 MB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	string sentence;
	cin >> sentence;
	int d=-1, o=-1, s=-1, a=-1, n=-1, sum=0;
	bool end=true;
	while(end) { 
  		d =  sentence.find("Danil", d+1	);
    	if (d != string::npos) {
        	sum++;
    	} else {
    		end=false;
    	}
 	}
 	end=true;
 	while(end) { 
  		o =  sentence.find("Olya", o+1);
    	if (o != string::npos) {
        	sum++;
    	} else {
    		end=false;
    	}
 	}
 	end=true;
 	while(end) { 
  		s =  sentence.find("Slava", s+1);
    	if (s != string::npos) {
        	sum++;
    	} else {
    		end=false;
    	}
 	}
 	end=true;
 	while(end) { 
  		n =  sentence.find("Nikita", n+1);
    	if (n != string::npos) {
        	sum++;
    	} else {
    		end=false;
    	}
 	}
 	end=true;
 	while(end) { 
  		a =  sentence.find("Ann", a+1);
    	if (a != string::npos) {
        	sum++;
    	} else {
    		end=false;
    	}
 	}
 	// cout << sum << endl;
 	if (sum == 1) {
 		cout << "YES" << endl;
 	} else {
 		cout << "NO" << endl;
 	}

 	return 0;
 }
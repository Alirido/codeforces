#include <iostream>
#include <string>
using namespace std;

string QuestionsMarks(string str) {
  
  int ln = str.length();
  int qmark = 0;
  int pair = -1;
  bool ans = true, isThere10 = false;
  for (int i=0; i<ln; i++) {
    int checkNum = str[i] - '0';
    if (str[i] == '?')
      qmark++;
    else if (checkNum >= 0 && checkNum < 10) {
      if (pair > -1) {
        if (pair + checkNum == 10) {
          isThere10 = true;
          if (qmark == 3)
            pair = checkNum;
          else {
            ans = false;
            break;
          }
        } else {
          pair = checkNum;
        }
      } else {
        pair = checkNum;
      }
      qmark = 0;
    }
  }

  return ans && isThere10? "true" : "false";

}

int main(void) { 
   
  // keep this function call here
  string str;
  cin >> str;
  cout << QuestionsMarks(str);
  return 0;
    
}
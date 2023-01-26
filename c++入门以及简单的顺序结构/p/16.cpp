#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string replaceSpaces(string &str) {
        string temp = "";
        for (int i = 0; i < str.size(); i ++) {
          if (str[i] == ' ') temp += "%20";
          else temp += str[i];
        }
        return temp;
    }
};

int main() {
  Solution* s = new Solution();
  string str = "We are happy.";
  cout << s->replaceSpaces(str) << endl;
  return 0;
}
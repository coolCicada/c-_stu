#include <bits/stdc++.h>
using namespace std;

int main() {
  string str;
  getline(cin, str);

  string res = "";
  for (int i = 0; i < str.size(); i ++) {
    if (i + 1 < str.size()) res += str[i] + str[i + 1];
    else res += str[i] + str[0];
  }

  cout << res << endl;

  return 0;
}
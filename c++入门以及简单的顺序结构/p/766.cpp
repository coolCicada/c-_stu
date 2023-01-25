#include <bits/stdc++.h>
using namespace std;

int main() {
  // cin 做法
  string str;
  while(cin >> str) {
    cout << str << ' ';
  }
  // 常规做法
  /* string str;
  getline(cin, str);

  string res = str.substr(0, 1);
  for (int i = 1; i < str.size(); i ++) {
    if (str[i - 1] == ' ' && str[i] == ' ') continue;
    res = res + str[i];
  }

  cout << res << endl; */

  return 0;
}
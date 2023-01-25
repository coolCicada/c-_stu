#include <bits/stdc++.h>
using namespace std;

int main() {
  string str, pre, after;
  getline(cin, str);
  cin >> pre >> after;

  stringstream ssin(str);
  string s;
  while (ssin >> s) {
    if (s == pre) cout << after << ' ';
    else cout << s << ' ';
  } 

  return 0;
}
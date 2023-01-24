#include <bits/stdc++.h>
using namespace std;

int main() {
  string str;
  char c;
  cin >> str;
  cin >> c;

  for (int i = 0; i < str.size(); i ++) {
    if (str[i] == c) str[i] = '#';
  }

  cout << str << endl;

  return 0;
}
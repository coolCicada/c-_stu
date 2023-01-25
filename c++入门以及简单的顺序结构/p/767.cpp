#include <bits/stdc++.h>
using namespace std;

int main() {
  string str;
  getline(cin, str);

  for (int i = 0; i < str.size(); i ++) {
    if (str[i] >= 'a' && str[i] <= 'z') {
      str[i] = 'a' + (str[i] + 1 - 'a') % 26;
    }

    if (str[i] >= 'A' && str[i] <= 'Z') {
      str[i] = 'A' + (str[i] + 1 - 'A') % 26;
    }
  }

  cout << str << endl;

  return 0;
}
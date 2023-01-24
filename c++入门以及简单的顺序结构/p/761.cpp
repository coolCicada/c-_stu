#include <bits/stdc++.h>
using namespace std;

int main() {
  string str;
  getline(cin, str);

  int count = 0;
  for (int i = 0; i < str.size(); i ++) {
    if (str[i] >= '0' && str[i] <= '9') count ++;
  }

  cout << count << endl;

  return 0;
}
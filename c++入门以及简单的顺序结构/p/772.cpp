#include <bits/stdc++.h>
using namespace std;

int main() {
  string str;
  cin >> str;

  int arr[26] = {0};
  for (int i = 0; i < str.size(); i ++) {
    arr[str[i] - 'a'] ++;
  }

  bool flag = false;
  for (int i = 0; i < str.size(); i ++) {
    if (arr[str[i] - 'a'] == 1) {
      flag = true;
      cout << str[i] << endl;
      break;
    }
  }

  if (!flag) cout << "no" << endl;

  return 0;
}
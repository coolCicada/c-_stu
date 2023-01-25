#include <bits/stdc++.h>
using namespace std;

int main() {
  string str;
  
  while (cin >> str, str != ".") {
    int length = str.size();

    for (int i = 1; i <= str.size(); i ++) {
      if (length % i != 0) continue;
      string temp = str.substr(0, i);
      string total = "";
      for (int j = 0; j < length / i; j ++) {
        total += temp;
      }
      if (total == str) {
        cout << length / i << endl;
        break;
      }
    }
  }

  return 0;
}
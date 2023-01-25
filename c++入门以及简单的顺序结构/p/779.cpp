#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  while (cin >> n, n) {
    vector<string> strArr(0);
    while (n --) {
      string temp;
      cin >> temp;
      strArr.push_back(temp);
    }

    string firstStr = strArr[0];
    int res = 0;

    for (int i = 1; i <= firstStr.size(); i ++) {

      char c = firstStr[firstStr.size() - i];
      bool flag = true;

      for (int j = 1; j < strArr.size(); j ++) {

        string currStr = strArr[j];
        int index = currStr.size() - i;

        if (index < 0) {
          flag = false;
          break;
        }

        char cc = currStr[currStr.size() - i];
        
        if (cc != c) {
          flag = false;
          break;
        }
      }

      if (!flag) break;
      if (flag) res = i;
    }

    string resStr = firstStr.substr(firstStr.size() - res);
    cout << resStr << endl;
  }

  return 0;
}
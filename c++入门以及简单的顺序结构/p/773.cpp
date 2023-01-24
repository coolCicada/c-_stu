#include <bits/stdc++.h>
using namespace std;

int main() {
  string a, b;
  while (cin >> a >> b) {
    int index = 0;
    for (int i = 1; i < a.size(); i ++) {
      if (a[i] > a[index]) index = i;
    }
    cout << a.insert(index + 1, b) << endl;
  }

  return 0;
}
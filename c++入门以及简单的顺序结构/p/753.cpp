#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  
  while (cin >> n, n > 0) {
    for (int i = 0; i < n; i ++) {
      for (int j = 0; j < n; j ++) {
        int m = min (min(i, j), min(n - 1 - i, n - 1 - j));
        cout << m + 1 << ' ';
      }
      cout << endl;
    }
    cout << endl;
  }

  return 0;
}
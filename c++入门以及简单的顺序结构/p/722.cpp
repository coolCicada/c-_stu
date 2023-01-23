#include <bits/stdc++.h>
using namespace std;

int main() {
  int m, n;

  while(cin >> m >> n, m > 0 && n > 0) {
    if (m > n) {
      int t = m;
      m = n;
      n = t;
    }

    int sum = 0;

    for (int i = m; i <= n; i ++) {
      sum += i;
      cout << i << ' ';
    }

    cout << "Sum" << '=' << sum << endl;
  }

  return 0;
}
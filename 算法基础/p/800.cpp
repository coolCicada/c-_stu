#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n, m, x;
  cin >> n >> m >> x;

  vector<int> a(n), b(m);
  for (int i = 0; i < n; i ++) {
    cin >> a[i];
  }
  for (int i = 0; i < m; i ++) {
    cin >> b[i];
  }

  for (int i = 0, j = b.size() - 1; i < a.size(); i ++) {
    while (a[i] + b[j] > x) {
      j --;
    }
    if (a[i] + b[j] == x) {
      cout << i << ' ' << j << endl;
      break;
    }
  }

  return 0;
}
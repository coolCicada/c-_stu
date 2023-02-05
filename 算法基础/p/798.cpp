#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n, m, q;
  cin >> n >> m >> q;

  vector<vector<int> > b(n + 1, vector<int>(m + 1));
  for (int i = 1; i <= n; i ++) {
    for (int j = 1; j <= m; j ++) {
      cin >> b[i][j];
    }
  }

  vector<vector<int> > a(n + 2, vector<int>(m + 2));
  while (q --) {
    int x1, y1, x2, y2, v;
    cin >> x1 >> y1 >> x2 >> y2 >> v;

    a[x1][y1] += v;
    a[x1][y2 + 1] -= v;
    a[x2 + 1][y1] -= v;
    a[x2 + 1][y2 + 1] += v;
  }

  for (int i = 1; i < n + 1; i ++) {
    for (int j = 1; j < m + 1;j ++ ) {
      a[i][j] += a[i - 1][j] + a[i][j - 1] - a[i - 1][j - 1];
    }
  }

  for (int i = 1; i < n + 1; i ++) {
    for (int j = 1; j < m + 1; j ++) {
      cout << a[i][j] + b[i][j] << ' ';
    }
    cout << endl;
  }

  return 0;
}
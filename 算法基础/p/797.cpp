#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n, m;
  cin >> n >> m;

  vector<int> a(n + 1), b(n + 1);
  for (int i = 1; i <= n; i ++) cin >> b[i];

  while (m --) {
    int l, r, v;
    cin >> l >> r >> v;

    a[l] += v;
    a[r + 1] -= v;
  }

  for (int i = 2; i <= n; i ++) {
    a[i] += a[i - 1];
  }

  for (int i = 1; i <= n; i ++) cout << a[i] + b[i] << ' ';

  return 0;
}
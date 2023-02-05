#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n, m;
  cin >> n >> m;

  vector<int> a(n), b(m);
  for (int i = 0; i < n; i ++) {
    cin >> a[i];
  }
  for (int j = 0; j < m; j ++) {
    cin >> b[j];
  }

  for (int i = 0, j = 0; i < a.size(); i ++) {
    while (j < b.size() && b[j] != a[i]) {
      j ++;
    }
    if (j == b.size()) {
      cout << "No" << endl;
      return 0;
    }
    j ++;
  }
  cout << "Yes" << endl;
  return 0;
}
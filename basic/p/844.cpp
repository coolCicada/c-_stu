#include <bits/stdc++.h>
using namespace std;

typedef pair<pair<int, int>, int> PII;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n, m;
  cin >> n >> m;

  vector<vector<int> > a(n, vector<int>(m));
  vector<vector<bool> > vis(n, vector<bool>(m));
  for (int i = 0; i < n; i ++) {
    for (int j = 0; j < m; j ++) {
      cin >> a[i][j];
    }
  }

  queue<PII> q;
  q.push({{ 0, 0 }, 0 });
  vis[0][0] = true;
  while (q.size()) {
    auto curr = q.front(); q.pop();

    if (curr.first.first == n - 1 && curr.first.second == m - 1) {
      cout << curr.second << endl;
      return 0;
    }

    int dx[] = { 0, 1, 0, -1 };
    int dy[] = { 1, 0, -1, 0 };

    for (int i = 0; i < 4; i ++) {
      int nx = curr.first.first + dx[i];
      int ny = curr.first.second + dy[i];

      if (nx >= 0 && ny >= 0 && nx < n && ny < m && !a[nx][ny] && !vis[nx][ny]) {
        q.push({{ nx, ny }, curr.second + 1});
        vis[nx][ny] = true;
      }
    }

  }

  return 0;
}
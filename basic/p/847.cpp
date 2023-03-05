#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> PII;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n, m;
  cin >> n >> m;
  vector<vector<int> > a(n + 1);
  vector<bool> vis(n + 1);

  for (int i = 0; i < m; i ++) {
    int from, to;
    cin >> from >> to;
    a[from].push_back(to);
  }

  queue<PII> q;
  q.push({ 1, 0 });

  while (q.size()) {
    PII curr = q.front();
    q.pop();

    if (curr.first == n) {
      cout << curr.second << endl;
      return 0;
    }
    
    auto others = a[curr.first];
    for (int i = 0; i < others.size(); i ++) {
      if (!vis[others[i]]) {
        q.push({ others[i], curr.second + 1 });
        vis[others[i]] = true;
      }
    }
  }

  cout << -1 << endl;

  return 0;
}
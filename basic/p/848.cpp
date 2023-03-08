#include <bits/stdc++.h>
using namespace std;


int n, m;
vector<vector<int> > arr;
vector<int> d;

void add(int x, int y) {
  arr[x].push_back(y);
}

vector<int> bfs() {
  vector<int> res;
  queue<int> q;
  for (int i = 1; i <= n; i ++) {
    if (d[i] == 0) q.push(i);
  }

  while (q.size()) {
    auto curr = q.front();
    res.push_back(q.front());
    q.pop();
    for (int i = 0; i < arr[curr].size(); i ++) {
      d[arr[curr][i]] --;
      if (d[arr[curr][i]] == 0) {
        q.push(arr[curr][i]);
      }
    }
  }

  return res;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  cin >> n >> m;

  arr.resize(n + 1);
  d.resize(n + 1, 0);

  for (int i = 0; i < m; i ++) {
    int x, y;
    cin >> x >> y;
    add(x, y);
    d[y] ++;
  }
  
  auto res = bfs();

  for (int i = 1; i <= n; i ++) {
    if (d[i] > 0) {
      cout << -1 << endl;
      return 0;
    }
  }

  for (int i = 0; i < res.size(); i ++) {
    cout << res[i] << ' ';
  }

  return 0;
}
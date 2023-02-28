#include <bits/stdc++.h>
using namespace std;

int N;
vector<int> res;
vector<bool> vis;

void dfs(int n) {
  if (n == N) {
    for (int i = 0; i < res.size(); i ++) {
      cout << res[i] + 1 << ' ';
    }
    cout << endl;
    return;
  }

  for (int i = 0; i < N; i ++) {
    if (!vis[i]) {
      res[n] = i;
      vis[i] = true;
      dfs(n + 1);
      vis[i] = false;
    }
  }
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;
  N = n;
  res = vector<int>(N, 0);
  vis = vector<bool>(N, false);
  dfs(0);
  
  return 0;
}
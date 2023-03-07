#include <bits/stdc++.h>
using namespace std;

vector<vector<int> > arr;
vector<bool> vis;
void add (int f, int t) {
  arr[f].push_back(t);
}
int res = 1e5 + 10;
int N;
int dfs(int n) {
  vis[n] = true;
  int sum = 1, tM = 0;
  for (int i = 0; i < arr[n].size(); i ++) {
    if (vis[arr[n][i]]) continue;
    int cs = dfs(arr[n][i]);
    tM = max(tM, cs);
    sum += cs;
  }

  tM = max(tM, N - sum);

  res = min(res, tM);

  return sum;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  cin >> N;
  arr = vector<vector<int> >(N + 1);
  vis = vector<bool>(N + 1);
  for (int i = 0; i < N - 1; i ++) {
    int x, y;
    cin >> x >> y;
    add(x, y);
    add(y, x);
  }

  dfs(1);

  cout << res << endl;

  return 0;
}
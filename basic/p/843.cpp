#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int N;
  cin >> N;

  vector<int> vis(N);
  vector<int> visP(2 * N, 0);
  vector<int> visM(2 * N, 0);
  vector<int> res;
  function<void(int)> dfs = [&](int n) {
    if (n == N) {
      for (int i = 0; i < N; i ++) {
        for (int j = 0; j < N; j ++) {
          if (j == res[i]) cout << 'Q';
          else cout << '.';
        }
        cout << endl;
      }
      cout << endl;
      return;
    }
    for (int i = 0; i < N; i ++) {
      if (vis[i] || visP[i + n] || visM[N - n + i]) continue;
      vis[i] = 1;
      visP[i + n] = 1;
      visM[N - n + i] = 1;
      res.push_back(i);
      dfs(n + 1);
      res.pop_back();
      vis[i] = 0;
      visP[i + n] = 0;
      visM[N - n + i] = 0;
    }
  };

  dfs(0);
  
  return 0;
}
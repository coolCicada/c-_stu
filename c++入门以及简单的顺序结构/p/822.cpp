#include <bits/stdc++.h>
using namespace std;

int arr[11][11];

int main() {
  int n, m;
  cin >> n >> m;

  arr[0][0] = 1;

  for (int i = 0; i <= n; i ++) {
    for (int j = 0; j <= m; j ++) {
      if (i == 0 && j == 0) continue;
      int left = j - 1 < 0 ? 0 : arr[i][j - 1];
      int top = i - 1 < 0 ? 0 : arr[i -1][j];
      arr[i][j] = top + left;
    }
  }

  cout << arr[n][m] << endl;

  return 0;
}
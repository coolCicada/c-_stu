#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  int arr[100][100] = {0};
  int dx[] = {0, 1, 0, -1};
  int dy[] = {1, 0, -1, 0};

  for (int x = 0, y = 0, d = 0, c = 1; c <= n * m; c ++) {
    arr[x][y] = c;
    int nx = x + dx[d];
    int ny = y + dy[d];
    if (nx < 0 || ny < 0 || nx >= n || ny >= m || arr[nx][ny]) {
      d = (d + 1) % 4;
      nx = x + dx[d];
      ny = y + dy[d];
    }
    x = nx;
    y = ny;
  }

  for (int i = 0; i < n; i ++) {
    for (int j = 0; j < m; j ++) {
      cout << arr[i][j] << ' ';
    }
    cout << endl;
  }

  return 0;
}
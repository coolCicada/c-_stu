#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int m, n;
  cin >> m >> n;

  vector<int> arr(m + 1);
  for (int i = 1; i <= m; i ++) {
    cin >> arr[i];
  }

  vector<int> arrP(m + 2);
  for (int i = 1; i < m + 1; i ++) {
    arrP[i] = arrP[i - 1] + arr[i];
  }

  for (int i = 0; i < n; i ++) {
    int a, b;
    cin >> a >> b;
    cout << arrP[b] - arrP[a - 1] << endl;
  }
  return 0;
}
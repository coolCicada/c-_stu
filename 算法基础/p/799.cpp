#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
int T[N];

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;

  vector<int> a(n);
  for (int i = 0; i < n; i ++) {
    cin >> a[i];
  }

  int r = 0;
  for (int i = 0, j = 0; i < a.size(); i ++) {
    T[a[i]] ++;
    while (T[a[i]] > 1) {
      T[a[j]] --;
      j ++;
    }
    r = max(r, i - j + 1);
  }

  cout << r << endl;
}
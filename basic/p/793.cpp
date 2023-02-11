#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  string a;
  int b;
  cin >> a >> b;

  if (b == 0) {
    cout << 0 << endl;
    return 0;
  }

  reverse(a.begin(), a.end());

  vector<int> res;
  int t = 0;
  for (int i = 0; i < a.size() || t; i ++) {
    if (i < a.size()) t += (a[i] - '0') * b;
    res.push_back(t % 10);
    t /= 10;
  }
  
  for (int i = res.size() - 1; i >= 0; i --) {
    cout << res[i];
  }

  cout << endl;

  return 0;
}
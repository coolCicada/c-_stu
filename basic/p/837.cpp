#include <bits/stdc++.h>
using namespace std;
vector<int> p;
vector<int> sa;
int find(int x) {
  if (p[x] != x) {
    p[x] = find(p[x]);
  }
  return p[x];
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n, m;
  cin >> n >> m;
  p.resize(n + 1);
  sa.resize(n + 1);

  for (int i = 1; i < p.size(); i ++) {
    p[i] = i;
    sa[i] = 1;
  }

  while (m --) {
    string t;
    cin >> t;

    if (t == "C") {
      int a, b;
      cin >> a >> b;

      if (find(a) != find(b)) {
        sa[find(b)] += sa[find(a)];
      }
      p[find(a)] = find(b);
    } else if (t == "Q1") {
      int a, b;
      cin >> a >> b;

      cout << (find(a) == find(b) ? "Yes" : "No") << endl;
    } else {
      int a;
      cin >> a;
      
      cout << sa[find(a)] << endl;
    }
  }

  return 0;
}
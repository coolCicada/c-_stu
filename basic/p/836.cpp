#include <bits/stdc++.h>
using namespace std;

vector<int> p;
int find(int t) {
  if (p[t] != t) p[t] = find(p[t]);
  return p[t];
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n, m;
  cin >> n >> m; 

  p.resize(n + 1);
  for (int i = 1; i < n + 1; i ++) {
    p[i] = i;
  }

  while (m --) {
    char x;
    int a, b;

    cin >> x >> a >> b;

    if (x == 'M') {
      p[find(a)] = find(b);
    }
    else {
      cout << (find(a) == find(b) ? "Yes" : "No") << endl;
    }
  }

  return 0;
}
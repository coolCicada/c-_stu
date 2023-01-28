#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;

  while (n --) {
    int l, r;
    cin >> l >> r;

    int la = sqrt(l), ra = sqrt(r), cnt = ra - la;

    if (la * la == l) cnt ++;

    cout << cnt << endl;
  }

  return 0;
}
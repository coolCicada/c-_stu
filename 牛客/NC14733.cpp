#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;

  /* while (n --) {
    int l, r;
    cin >> l >> r;

    int la = sqrt(l), ra = sqrt(r), cnt = ra - la;

    if (la * la == l) cnt ++;

    cout << cnt << endl;
  } */

  while (n --) {
    int a, b, at, bt;
    cin >> a >> b;

    int l = 0, r = 4e4;

    while (l < r) {
      int mid = l + r + 1>> 1;
      if (mid * mid < a) l = mid;
      else r = mid - 1;
    }

    at = l;
    
    if (a == 0) at = -1;
    
    l = 0, r = 4e4;

    while (l < r) {
      int mid = l + r + 1 >> 1;
      if ((double)mid * mid <= b) l = mid;
      else r = mid - 1;
    }

    bt = l;
    

    cout << bt - at << endl;
  }

  return 0;
}
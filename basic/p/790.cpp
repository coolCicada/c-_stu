#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  double n;
  cin >> n;

  double l = -10000, r = 10000;
  const double eps = 1e-8;
  while (r - l > eps) {
    double mid = (l + r) / 2;
    if (mid * mid * mid >= n) r = mid;
    else l = mid;
  }

  printf("%.6lf\n", l);

  return 0;
}
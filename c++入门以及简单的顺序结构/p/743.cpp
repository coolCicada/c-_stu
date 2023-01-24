#include <bits/stdc++.h>
using namespace std;

int main() {
  double a[12][12];
  int l;
  char s;

  cin >> l;
  cin >> s;

  for (int i = 0; i < 12; i ++) {
    for (int j = 0; j < 12; j ++) {
      cin >> a[i][j];
    }
  }

  double t = 0;
  for (int i = 0; i < 12; i ++) {
    t += a[l][i];
  }

  if (s == 'S') printf("%.1lf\n", t);
  else printf("%.1lf\n", t / 12);

  return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
  char s;
  double a[12][12];

  cin >> s;

  for (int i = 0; i < 12; i ++) {
    for (int j = 0; j < 12; j ++) {
      cin >> a[i][j];
    }
  }

  double t = 0;
  for (int i = 0; i < 12; i ++) {
    for (int j = 0; j < 12; j ++) {
      if (j > i) t += a[i][j];
    }
  }

  if (s == 'S') printf("%.1lf\n", t);
  else printf("%.1lf\n", t / ((12 * 12 - 12) / 2));

  return 0;
}
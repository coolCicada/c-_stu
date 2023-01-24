#include <bits/stdc++.h>
using namespace std;

int main() {
  char c;
  double a[12][12];

  cin >> c;

  for (int i = 0; i < 12; i ++) {
    for (int j = 0; j < 12; j ++) {
      cin >> a[i][j];
    }
  }

  double t;
  int count = 0;
  for (int i = 0; i < 12; i ++) {
    for (int j = 0; j < 12; j ++) {
      if (i + j <= 10) {
        t += a[i][j];
        count ++;
      }
    }
  }

  if (c == 'S') printf("%.1lf", t);
  else printf("%.1lf\n", t / count);

  return 0;
}
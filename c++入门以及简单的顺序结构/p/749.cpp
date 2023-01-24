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

  double total = 0;
  int count = 0;
  for (int i = 0; i < 5; i ++) {
    for (int j = 0; j < 12; j ++) {
      if (j - i >= 1 && i + j <= 10) {
        total += a[i][j];
        count ++;
      }
    }
  }

  if (c == 'S') printf("%.1lf\n", total);
  else printf("%.1lf\n", total / count);

  return 0;
}
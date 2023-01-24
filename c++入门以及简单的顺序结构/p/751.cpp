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
  for (int j = 0; j < 5; j ++) {
    for (int i = j + 1; i < 11 - j; i ++) {
      count += 1;
      total += a[i][j];
    }
  }

  if (c == 'S') printf("%.1lf\n", total);
  else printf("%.1lf\n", total / count);

  return 0;
}
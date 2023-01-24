#include <bits/stdc++.h>
using namespace std;

int main() {
  char c;
  double arr[12][12];

  cin >> c;

  for (int i = 0; i < 12; i ++) {
    for (int j = 0; j < 12; j ++) {
      cin >> arr[i][j];
    }
  }

  double total = 0;
  int count = 0;
  for (int j = 1; j < 6; j ++) {
    for (int i = 12 - j; i < 12; i ++) {
      total += arr[i][j];
      count ++;
    }
  }

  for (int j = 6; j < 11; j ++) {
    for (int i = j + 1; i < 12; i ++) {
      total += arr[i][j];
      count ++;
    }
  }

  if (c == 'S') printf("%.1lf\n", total);
  else printf("%.1lf\n", total / count);

  return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  char c;

  cin >> n;
  cin >> c;

  double arr[12][12];
  for (int i = 0; i < 12; i ++) {
    for (int j = 0; j < 12; j ++) {
      cin >> arr[i][j];
    }
  }

  double total;
  for (int i = 0; i < 12; i ++) {
    total += arr[i][n];
  }

  if (c == 'S') printf("%.1lf\n", total);
  else printf("%.1lf\n", total / 12);

  return 0;
}
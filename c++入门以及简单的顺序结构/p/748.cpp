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
  int num = 0;
  for (int i = 1; i < 12; i ++) {
    for (int j = 12 - i; j < 12; j ++) {
      num ++;
      total += arr[i][j];
    }
  }

  if (c == 'S') printf("%.1lf", total);
  else printf("%.1lf", total / num);

  return 0;
}
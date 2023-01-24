#include <bits/stdc++.h>
using namespace std;

int main() {
  char c;
  const int L = 12;
  double arr[L][L];

  cin >> c;

  for (int i = 0; i < L; i ++)
  for (int j = 0; j < L; j ++)
    cin >> arr[i][j];

  double total = 0;
  int count = 0;
  for (int j = L / 2 + 1; j < L; j ++) {
    for (int i = L - j; i < j; i ++) {
      total += arr[i][j];
      count += 1;
    }
  }

  if (c == 'S') printf("%.1lf\n", total);
  else printf("%.1lf\n", total / count);

  return 0;
}
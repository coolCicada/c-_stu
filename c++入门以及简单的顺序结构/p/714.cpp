#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, y;
  cin >> x >> y;

  if (x > y) {
    int t = x;
    x = y;
    y = t;
  }

  int sum = 0;

  for (int i = x + 1; i < y; i ++) {
    if (i % 2 == 1 || i % 2 == -1) sum += i;
  }

  cout << sum << endl;

  return 0;
}
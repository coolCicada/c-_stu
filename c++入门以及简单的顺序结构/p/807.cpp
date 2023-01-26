#include <bits/stdc++.h>
using namespace std;

int sum(int l, int r) {
  int t = 0;
  for (int i = l; i <= r; i ++) t += i;
  return t;
}

int main() {
  int l, r;
  cin >> l >> r;

  cout << sum(l, r) << endl;

  return 0;
}
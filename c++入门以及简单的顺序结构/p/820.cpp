#include <bits/stdc++.h>
using namespace std;

int d(int n) {
  if (n == 0) return 1;
  if (n == 1) return 1;
  return d(n - 1) + d(n - 2);
}

int main() {
  int n;
  cin >> n;

  cout << d(n - 1) << endl;

  return 0;
}
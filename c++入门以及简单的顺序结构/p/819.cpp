#include <bits/stdc++.h>
using namespace std;

int d(int n) {
  if (n == 1) return 1;
  return n * d(n - 1);
}

int main() {
  int n;
  cin >> n;

  cout << d(n) << endl;

  return 0;
}
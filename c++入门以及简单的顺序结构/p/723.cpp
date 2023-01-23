#include <bits/stdc++.h>
using namespace std;

int main() {
  int m, n;
  cin >> m >> n;

  for (int i = 1; i <= m * n; i++) {
    if (i % n == 0) {
      cout << "PUM" << endl;
    } else {
      cout << i << ' ';
    }
  }

  return 0;
}
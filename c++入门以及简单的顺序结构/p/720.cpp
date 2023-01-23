#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, n;
  cin >> a;

  while (cin >> n) {
    if (n <= 0) continue;
    int sum = 0;
    for (int i = 0; i < n; i ++) {
      sum += a ++;
    }
    cout << sum << endl;
    break;
  }

  return 0;
}
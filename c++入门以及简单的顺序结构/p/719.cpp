#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i ++) {
    int a, b;
    cin >> a >> b;
    if (a > b) {
      int t = a;
      a = b;
      b = t;
    }
    int sum = 0;
    for (int j = a + 1; j < b; j ++ ) {
      if (j % 2) sum += j;
    }
    cout << sum << endl;
  }

  return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i ++) {
    int x;
    cin >> x;
    
    bool flag = true;
    for (int j = 2; j * j <= x; j ++) {
      if (x % j == 0) {
        flag = false;
        break;
      }
    }
    if (flag) cout << x << " is prime" << endl;
    else cout << x << " is not prime" << endl;
  }

  return 0;
}
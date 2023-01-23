#include <bits/stdc++.h>
using namespace std;

int main() {
  int a;
  cin >> a;

  while (a) {
    for (int i = 1; i <= a; i++) {
      cout << i << ' ';
    }
    cout << endl;
    cin >> a;
  }

  return 0;
}
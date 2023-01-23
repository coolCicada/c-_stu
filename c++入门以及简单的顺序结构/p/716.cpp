#include <bits/stdc++.h>
using namespace std;

int main() {
  int a;

  int max = 0;
  int index = 0;
  for (int i = 1; i <= 100; i ++) {
    cin >> a;
    if (a > max) {
      max = a;
      index = i;
    }
  }

  cout << max << endl << index << endl;

  return 0;
}
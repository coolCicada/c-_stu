#include <bits/stdc++.h>
using namespace std;

int lcm(int a, int b) {
  int max = a * b;
  int minV = min(a, b);

  for (int i = minV; i <= max; i ++) {
    if (i % a == 0 && i % b == 0) return i;
  }

  return -1;
}

int main() {
  int a, b;
  cin >> a >> b;

  cout << lcm(a, b) << endl;

  return 0;
}
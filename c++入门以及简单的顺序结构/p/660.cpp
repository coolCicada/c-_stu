#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  double total = 0;

  if (a == 1) {
    total = 4.00 * b;
  } else if (a == 2) {
    total = 4.50 * b;
  } else if (a == 3) {
    total = 5.00 * b;
  } else if (a == 4) {
    total = 2.00 * b;
  } else if (a == 5) {
    total = 1.50 * b;
  }

  printf("Total: R$ %.2lf\n", total);

  return 0;
}
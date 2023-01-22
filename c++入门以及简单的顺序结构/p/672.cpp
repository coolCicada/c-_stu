#include <bits/stdc++.h>
using namespace std;

int main() {
  double a;
  cin >> a;

  double total = 0;

  if (a <= 2000) {
    cout << "Isento" << endl;
  } else {
    if (a > 4500) {
      total += (a - 4500) * 0.28;
      a = 4500;
    }
    if (a > 3000) {
      total += (a - 3000) * 0.18;
      a = 3000;
    }
    if (a > 2000) {
      total += (a - 2000) * 0.08;
    }
    printf("R$ %.2lf\n", total);
  }

  return 0;
}
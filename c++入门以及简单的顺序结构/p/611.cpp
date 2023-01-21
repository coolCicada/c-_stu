#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, y;
  double z;
  int x2, y2;
  double z2;
  cin >> x >> y >> z;
  cin >> x2 >> y2 >> z2;

  printf("VALOR A PAGAR: R$ %.2lf\n", y * z + y2 * z2);

  return 0;
}
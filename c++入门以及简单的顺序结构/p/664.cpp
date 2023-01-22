#include <bits/stdc++.h>
using namespace std;

int main() {
  double a, b, c;
  cin >> a >> b >> c;

  if (a + b > c && abs(a - b) < c) {
    printf("Perimetro = %.1lf\n", a + b + c);
  } else {
    printf("Area = %.1lf\n", (a + b) * c / 2);
  }

  return 0;
}
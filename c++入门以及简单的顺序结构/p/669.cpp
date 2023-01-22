#include <bits/stdc++.h>
using namespace std;

int main() {
  double a;
  cin >> a;
  double x;

  if (a > 2000) x = 0.04;
  else if (a > 1200) x = 0.07;
  else if (a > 800) x = 0.1;
  else if (a > 400) x = 0.12;
  else x = 0.15;

  printf("Novo salario: %.2lf\n", a * (1 + x));
  printf("Reajuste ganho: %.2lf\n", a * x);
  printf("Em percentual: %.0lf \%\n", x * 100);

  return 0;
}
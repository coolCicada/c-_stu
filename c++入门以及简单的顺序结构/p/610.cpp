#include <bits/stdc++.h>
using namespace std;

int main() {
  string name;
  double a, b;

  cin >> name >> a >> b;

  printf("TOTAL = R$ %.2lf\n", a + b * 0.15);

  return 0;
}
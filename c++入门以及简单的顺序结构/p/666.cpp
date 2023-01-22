#include <bits/stdc++.h>
using namespace std;

int main() {
  double a, b, c;
  cin >> a >> b >> c;

  if (b > a) {
    double t = b;
    b = a;
    a = t;
  }

  if (c > a) {
    double t = c;
    c = a;
    a = t;
  }

  if (a >= b + c) cout << "NAO FORMA TRIANGULO" << endl;
  else {
    if (a * a == b * b + c * c) cout << "TRIANGULO RETANGULO" << endl;
    else if (a * a > b * b + c * c) cout << "TRIANGULO OBTUSANGULO" << endl;
    else cout << "TRIANGULO ACUTANGULO" << endl;
    if (a == b && b == c) cout << "TRIANGULO EQUILATERO" << endl;
    else if (a == b || b == c || a == c) {
      cout << "TRIANGULO ISOSCELES" << endl;
    }
  }

  return 0;
}
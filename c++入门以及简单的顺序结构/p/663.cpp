#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  int d = a;
  int e = b;
  int f = c;

  if (d > e) {
    int t = d;
    d = e;
    e = t;
  }

  if (d > f) {
    int t = d;
    d = f;
    f = t;
  }

  if (e > f) {
    int t = e;
    e = f;
    f = t;
  }

  cout << d << endl;
  cout << e << endl;
  cout << f << endl;

  cout << endl;

  cout << a << endl;
  cout << b << endl;
  cout << c << endl;

  return 0;
}
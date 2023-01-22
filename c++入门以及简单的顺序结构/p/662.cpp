#include <bits/stdc++.h>
using namespace std;

int main() {
  double x, y;
  cin >> x >> y;

  if (x > 0) {
    if (y > 0) cout << "Q1" << endl;
    if (y == 0) cout << "Eixo X" << endl;
    if (y < 0) cout << "Q4" << endl;
  } else if (x == 0) {
    if (y > 0) cout << "Eixo Y" << endl;
    if (y == 0) cout << "Origem" << endl;
    if (y < 0) cout << "Eixo Y" << endl;
  } else {
    if (y < 0) cout << "Q3" << endl;
    if (y == 0) cout << "Eixo X" << endl;
    if (y > 0) cout << "Q2" << endl;
  }
  return 0;
}
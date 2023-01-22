#include <bits/stdc++.h>
using namespace std;

int main() {
  double a;
  cin >> a;

  if (a > 100 || a < 0) {
    cout << "Fora de intervalo" << endl;
  } else if (a > 75) {
    printf("Intervalo (%d,%d]\n", 75, 100);
  } else if (a > 50) {
    printf("Intervalo (%d,%d]\n", 50, 75);
  } else if (a > 25) {
    printf("Intervalo (%d,%d]\n", 25, 50);
  } else if (a >= 0) {
    printf("Intervalo [%d,%d]\n", 0, 25);
  }

  return 0;
}
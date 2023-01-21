#include <bits/stdc++.h>
using namespace std;

int main() {
  double total;
  cin >> total;

  int t = total * 100;

  int a[] = {10000, 5000, 2000, 1000, 500, 200};
  int b[] = {100, 50, 25, 10, 5, 1};

  cout << "NOTAS:" << endl;
  for (int i : a) {
    printf("%d nota(s) de R$ %d.00\n", t / i, i / 100);
    t %= i;
  }

  cout << "MOEDAS:" << endl;
  for (int i : b) {
    printf("%d moeda(s) de R$ %.2lf\n", t / i, (double)i / 100);
    t %= i;
  }
  return 0;
}
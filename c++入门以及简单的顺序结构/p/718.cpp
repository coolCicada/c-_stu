#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int num;
  char t;
  int c = 0, r = 0, f = 0;

  for (int i = 0; i < n; i ++) {
    cin >> num >> t;

    if (t == 'C') c += num;
    if (t == 'R') r += num;
    if (t == 'F') f += num;
  }

  printf("Total: %d animals\n", c + r + f);
  printf("Total coneys: %d\n", c);
  printf("Total rats: %d\n", r);
  printf("Total frogs: %d\n", f);
  printf("Percentage of coneys: %.2lf \%\n", (double)c / (c + r + f) * 100);
  printf("Percentage of rats: %.2lf \%\n", (double)r / (c + r + f) * 100);
  printf("Percentage of frogs: %.2lf \%\n", (double)f / (c + r + f) * 100);

  return 0;
}
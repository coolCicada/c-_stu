#include <bits/stdc++.h>
using namespace std;

int main() {
  int a;
  cin >> a;

  int h = a / 3600;
  a %= 3600;

  int m = a / 60;
  a %= 60;

  int s = a;

  printf("%d:%d:%d\n", h, m, s);

  return 0;
}
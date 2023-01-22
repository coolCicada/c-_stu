#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  int start = a * 60 + b;
  int end = c * 60 + d;

  int r;

  if (end > start) {
    r = end - start;
  } else {
    r = end + 24 * 60 - start;
  }

  printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", r / 60, r % 60);

  return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
  int a;
  cin >> a;

  cout << a / 365 << " ano(s)" << endl;
  a %= 365;
  cout << a / 30 << " mes(es)" << endl;
  a %= 30;
  cout << a << " dia(s)" << endl;

  return 0;
}
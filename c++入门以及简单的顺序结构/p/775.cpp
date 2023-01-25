#include <bits/stdc++.h>
using namespace std;

int main() {
  string str[100];

  int ctn = 0;
  while (cin >> str[ctn]) ctn ++;

  for (int i = ctn - 1; i >= 0; i --) {
    cout << str[i] << ' ';
  }

  cout << endl;

  return 0;
}
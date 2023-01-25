#include <bits/stdc++.h>
using namespace std;

int main() {
  string a, b;
  cin >> a >> b;

  if (a.size() < b.size()) swap(a, b);

  string a2 = a + a;
  if (a2.find(b) != -1) {
    cout << "true" << endl;
  } else {
    cout << "false" << endl;
  }

  return 0;
}
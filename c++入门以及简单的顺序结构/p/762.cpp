#include <bits/stdc++.h>
using namespace std;

int main() {
  double d;
  string a, b;

  cin >> d;
  cin >> a >> b;

  int count = 0;
  for (int i = 0; i < a.size(); i ++) {
    if (a[i] == b[i]) count ++;
  }
  if ((double)count / a.size() >= d) {
    cout << "yes" << endl;
  } else {
    cout << "no" << endl;
  }

  return 0;
}
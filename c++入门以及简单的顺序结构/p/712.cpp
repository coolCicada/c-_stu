#include <bits/stdc++.h>
using namespace std;

int main() {
  int count = 0;

  for (int i = 0; i < 6; i ++) {
    double t;
    cout >> t;
    if (t > 0) count ++;
  }

  cout << count << " positive numbers" << endl;

  return 0;
}
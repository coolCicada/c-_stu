#include <bits/stdc++.h>
using namespace std;

int main() {
  string a, b;
  getline(cin, a);
  getline(cin, b);

  transform(a.begin(), a.end(), a.begin(), ::toupper);
  transform(b.begin(), b.end(), b.begin(), ::toupper);

  if (a == b) cout << '=' << endl;
  if (a < b) cout << '<' << endl;
  if (a > b) cout << '>' << endl;

  return 0;
}
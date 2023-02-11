#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  string a, b;
  cin >> a >> b;

  vector<int> A, B, C;
  for (int i = a.size() - 1; i >= 0; i --) A.push_back(a[i] - '0');
  for (int j = b.size() - 1; j >= 0; j --) B.push_back(b[j] - '0');

  int t = 0;
  for (int i = 0, j = 0; i < A.size() || j < b.size(); i ++, j ++) {
    if (i < A.size()) t += A[i];
    if (j < B.size()) t += B[i];
    C.push_back(t % 10);
    t /= 10;
  }

  if (t) C.push_back(t);

  for (int i = C.size() - 1; i >= 0; i --) {
    cout << C[i];
  }
  
  cout << endl;

  return 0;
}
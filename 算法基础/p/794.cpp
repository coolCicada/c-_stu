#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  string a;
  int b;
  cin >> a >> b;

  vector<int> A, C;
  for (int i = 0; i < a.size(); i ++) {
    A.push_back(a[i] - '0');
  }

  int t = 0;
  for (int i = 0; i < A.size(); i ++) {
    t = t * 10 + A[i];
    C.push_back(t / b);
    t = t % b;
  }

  int k = 0;
  while (k < C.size() - 1 && C[k] == 0) k ++;

  for (int i = k; i < C.size(); i ++) {
    cout << C[i];
  }
  cout << endl;
  cout << t;
  return 0;
}
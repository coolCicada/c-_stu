#include<bits/stdc++.h>

using namespace std;

bool BigT(vector<int>& a, vector<int>& b) {
  if (a.size() != b.size()) return a.size() > b.size();
  for (int i = a.size() - 1; i >= 0; i --) {
    if (a[i] != b[i]) return a[i] > b[i];
  }
  return true;
}

vector<int> sub(vector<int>& a, vector<int>& b) {
  vector<int> c(a.size());
  int t = 0;
  for (int i = 0; i < a.size(); i ++) {
    a[i] -= t;
    if (i < b.size()) a[i] -= b[i];
    c[i] = (a[i] + 10) % 10;
    if (a[i] < 0) t = 1;
    else t = 0;
  }
  while (c.size() > 1 && c.back() == 0) c.pop_back();
  return c;
}

int main() {
  string a, b;
  cin >> a >> b;
  
  vector<int> A, B;
  
  for (int i = a.size() - 1; i >= 0; i --) {
    A.push_back(a[i] - '0');
  }
  for (int i = b.size() - 1; i >= 0; i --) {
    B.push_back(b[i] - '0');
  }
  vector<int> res;
  if (BigT(A, B)) res = sub(A, B);
  else {
    cout << '-';
    res = sub(B, A);
  }
  for (int i = res.size() - 1; i >= 0; i --) {
    cout << res[i];
  }
} 
  
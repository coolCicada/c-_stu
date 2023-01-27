#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> a({1, 4, 2, 2, 2, 3, 4, 5});

  reverse(a.begin(), a.end());

  for (int i = 0; i < a.size(); i ++) {
    cout << a[i] << ' ';
  }
  cout << endl;

  a.erase(unique(a.begin(), a.end()), a.end());
  for (int i = 0; i < a.size(); i ++) {
    cout << a[i] << ' ';
  }
  
  return 0;
}
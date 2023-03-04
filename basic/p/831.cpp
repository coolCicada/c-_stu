#include<bits/stdc++.h>

using namespace std;

int main() {
  int n, m;
  string ns, ms;
  cin >> n >> ns >> m >> ms;
  
  vector<int> ne(n);
  for (int i = 1, j = 0; i < n; i ++) {
    while (j && ns[i] != ns[j]) j = ne[j - 1];
    if (ns[i] == ns[j]) j ++;
    ne[i] = j;
  }
  
  vector<int> res;
  for (int i = 0, j = 0; i < m; i ++) {
    while (j && ns[j] != ms[i]) j = ne[j - 1];
    if (ns[j] == ms[i]) j ++;
    if (j == n) {
      cout << i - n + 1 << ' ';
      j = ne[j - 1];
    }
  }
  
  return 0;
  
}
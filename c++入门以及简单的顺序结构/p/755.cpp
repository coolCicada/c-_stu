#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  while (cin >> n, n > 0) {
    long long arr[15][15] = {1};
    
    for (int i = 1; i < n; i ++) {
      arr[0][i] = arr[0][i - 1] * 2;
    }

    for (int i = 1; i < n; i ++) {
      for (int j = 0; j < n; j ++) {
        arr[i][j] = arr[i - 1][j] * 2;
      }
    }

    for (int i = 0; i < n; i ++) {
      for (int j = 0; j < n; j ++) {
        cout << arr[i][j] << ' ';
      }
      cout << endl;
    }
    cout << endl;
  }
  
  return 0;
}
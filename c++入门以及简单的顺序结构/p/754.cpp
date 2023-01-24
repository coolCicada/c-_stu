#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  while (cin >> n, n > 0) {
    int arr[100][100];

    for (int i = 0; i < n; i ++) {
      for (int j = 0; j < n; j ++) {
        arr[i][j] = abs(i - j) + 1;
      }
    }

    for(int i = 0; i < n; i ++) {
      for (int j = 0; j < n; j ++) {
        cout << arr[i][j] << ' ';
      }
      cout << endl;
    }
    cout << endl;
  }

  return 0;
}
#include <bits/stdc++.h>
using namespace std;

void copy(int a[], int b[], int size) {
  for (int i = 0; i < size; i ++) {
    b[i] = a[i];
  }
}

int main() {
  int n, m, size;
  cin >> n >> m >> size;

  int a[100];
  int b[100];

  for (int i = 0; i < n; i ++) {
    cin >> a[i];
  }

  for (int j = 0; j < m; j ++) {
    cin >> b[j];
  }

  copy(a, b, size);

  for (int i = 0; i < m; i ++) {
    cout << b[i] << ' ';
  }

  cout << endl;

  return 0;
}
#include <bits/stdc++.h>
using namespace std;

int arr[101][101];

void print2D(int a[][101], int row, int col) {
  for (int i = 0; i < row; i ++) {
    for (int j = 0; j < col; j ++) {
      cout << a[i][j] << ' ';
    }
    cout << endl;
  }
}

int main() {
  int row, col;
  cin >> row >> col;

  for (int i = 0; i < row; i ++) {
    for (int j = 0; j < col; j ++) {
      cin >> arr[i][j];
    }
  }

  print2D(arr, row, col);

  return 0;
}
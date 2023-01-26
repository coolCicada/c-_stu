#include <bits/stdc++.h>
using namespace std;

int arr[1000];

void mySort(int a[], int l, int r);

int main() {
  int n, l, r;
  cin >> n >> l >> r;

  for (int i = 0; i < n; i ++) {
    cin >> arr[i];
  }

  mySort(arr, l, r);

  for (int i = 0; i < n; i ++) {
    cout << arr[i] << ' ';
  }

  return 0;
}

void mySort(int a[], int l, int r) {
  for (int i = l; i < r; i ++) {
    for (int j = i + 1; j <= r; j ++) {
      if (a[i] > a[j]) swap(a[i], a[j]);
    }
  }
}
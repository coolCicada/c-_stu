#include <bits/stdc++.h>
using namespace std;

int quickSort(vector<int>& arr, int l, int r, int k);

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> arr(n);

  for (int i = 0; i < n; i ++) {
    cin >> arr[i];
  }

  cout << quickSort(arr, 0, arr.size() - 1, m) << endl;

  return 0;
}

int quickSort(vector<int>& arr, int l, int r, int k) {
  if (l >= r) return arr[l];

  int i = l - 1, j = r + 1, x = arr[l + r >> 1];
  while (i < j) {
    do i ++; while (arr[i] < x);
    do j --; while (arr[j] > x);
    if (i < j) swap(arr[i], arr[j]);
  }

  if (k - 1 <= j) return quickSort(arr, l, j, k);
  else return quickSort(arr, j + 1, r, k);
  return 0;
}
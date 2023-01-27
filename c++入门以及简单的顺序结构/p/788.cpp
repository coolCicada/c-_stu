#include <bits/stdc++.h>
using namespace std;

long long total = 0;

void mergeSort(vector<int>& arr, int l, int r);

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;

  vector<int> arr(n);
  for (int i = 0; i < n; i ++) {
    cin >> arr[i];
  }

  mergeSort(arr, 0, n - 1);

  cout << total << endl;

  return 0;
}

void mergeSort(vector<int>& arr, int l, int r) {
  if (l >= r) return;

  int mid = l + r >> 1, i = l, j = mid + 1, k = 0;

  mergeSort(arr, l, mid);
  mergeSort(arr, mid + 1, r);

  vector<int> temp(r - l + 1);
  while (i <= mid && j <= r) {
    if (arr[i] <= arr[j]) {
      total += j - mid - 1;
      temp[k ++] = arr[i ++];
    } else {
      temp[k ++] = arr[j ++];
    }
  }
  while (i <= mid) {
    total += j - mid - 1;
    temp[k ++] = arr[i ++];
  }
  while (j <= r) {
    temp[k ++] = arr[j ++];
  }

  for (int i = l, j = 0; i <= r; i ++, j ++) {
    arr[i] = temp[j];
  }
}
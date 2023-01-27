#include <bits/stdc++.h>
using namespace std;

int arr[100000];
int temp[100000];

void mergeSort(int q[], int l, int r);

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i ++) {
    cin >> arr[i];
  }

  mergeSort(arr, 0, n - 1);

  for (int i = 0; i < n; i ++) {
    cout << arr[i] << ' ';
  }

  cout << endl;

  return 0;
}

void mergeSort(int arr[], int l, int r) {
  if (l >= r) return;
  int mid = l + r >> 1;
  mergeSort(arr, l, mid);
  mergeSort(arr, mid + 1, r);
  int k = 0, i = l, j = mid + 1;
  while (i <= mid && j <= r) temp[k ++] = arr[i] <= arr[j] ? arr[i ++] : arr[j ++];
  while (i <= mid) temp[k ++] = arr[i ++];
  while (j <= r) temp[k ++] = arr[j ++];
  for (int i = 0; i < r - l + 1; i ++) {
    arr[l + i] = temp[i];
  }
  // for (int i = l, j = 0; i <= r; i ++, j ++) arr[i] = temp[j];
}
#include <bits/stdc++.h>
using namespace std;

int nums[100000];

void quickSort(int nums[], int l, int r);

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i ++) {
    cin >> nums[i];
  }

  quickSort(nums, 0, n - 1);

  for (int i = 0; i < n; i ++) {
    cout << nums[i] << ' ';
  }
  cout << endl;

  return 0;
}

void quickSort(int q[], int l, int r) {
  if (l >= r) return;
  int x = nums[l + r >> 1];
  int i = l - 1, j = r + 1;
  while (i < j) {
    do i ++; while (nums[i] < x);
    do j --; while (nums[j] > x);
    if (i < j) swap(nums[i], nums[j]);
  }
  quickSort(nums, l, j);
  quickSort(nums, j + 1, r);
}
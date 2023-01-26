#include <bits/stdc++.h>
using namespace std;

void reverse(int a[], int size) {
  int l = 0;
  int r = size - 1;
  while (l < r) {
    int t = a[l];
    a[l] = a[r];
    a[r] = t;
    l ++;
    r --;
  }
}

int main() {
  int n, size;
  int arr[1000];

  cin >> n >> size;

  for (int i = 0; i < n; i ++) {
    cin >> arr[i];
  }

  reverse(arr, size);

  for (int i = 0; i < n; i ++) {
    cout << arr[i] << ' ';
  }

  cout << endl;

  return 0;
}
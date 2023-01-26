#include <bits/stdc++.h>
using namespace std;

int get_unique_count(int a[], int n);

int main() {
  int n;
  cin >> n;

  int arr[1000];
  for (int i = 0; i < n; i ++) {
    cin >> arr[i];
  }

  cout << get_unique_count(arr, n) << endl;

  return 0;
}

int get_unique_count(int a[], int n) {
  int arr[1000] = {0};
  int cnt = 0;
  for (int i = 0; i < n; i ++) {
    if (arr[a[i] - 1] == 0) {
      arr[a[i] - 1] ++;
      cnt ++;
    }
  }

  return cnt;
}
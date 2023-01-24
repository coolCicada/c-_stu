#include <bits/stdc++.h>
using namespace std;

int main() {
  int arr[20];

  for (int i = 0; i < 20; i ++) {
    cin >> arr[i];
  }

  int l = 0;
  int r = 19;

  while (l < r) {
    int t = arr[l];
    arr[l] = arr[r];
    arr[r] = t;
    l ++;
    r --;
  }

  for (int i = 0; i < 20; i ++) {
    printf("N[%d] = %d\n", i, arr[i]);
  }

  return 0;
}
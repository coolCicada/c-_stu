#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int arr[1001];

  for (int i = 0; i < n; i ++) {
    cin >> arr[i];
  }

  int index = 0;

  for (int i = 1; i < n; i ++) {
    if (arr[i] < arr[index]) index = i;
  }

  printf("Minimum value: %d\n", arr[index]);
  printf("Position: %d\n", index);

  return 0;
}
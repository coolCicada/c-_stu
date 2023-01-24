#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  long long arr[61] = {0, 1};
  for (int i = 2; i <= 61; i ++) {
    arr[i] = arr[i - 1] + arr[i - 2];
  }

  while (n --) {
    int num;
    cin >> num;
    
    printf("Fib(%d) = %lld\n", num, arr[num]);
  }

  return 0;
}
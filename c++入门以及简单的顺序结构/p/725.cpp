#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i ++) {
    int num;
    cin >> num;

    int sum = 0;
    for (int j = 1; j * j <= num; j ++) {
      if (num % j == 0) {
        if (j < num) sum += j;
        if (j != 1 && j != num / j) sum += num / j;
      }
    }
    if (sum == num) {
      cout << num << " is perfect" << endl;
    } else {
      cout << num << " is not perfect" << endl;
    }
  }

  return 0;
}
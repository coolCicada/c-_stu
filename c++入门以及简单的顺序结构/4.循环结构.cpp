#include <bits/stdc++.h>
using namespace std;

int main() {
  // while
  /* int i = 0;
  while (i < 10) {
    cout << i << endl;
    i ++;
  } */

  // 求1~100中所有数的立方和
  /* int i = 0, sum = 0;
  while (i <= 100) {
    sum += i * i * i;
    i ++;
  }
  cout << sum << endl; */

  // 求斐波那契数列的第n项
  /* int n;
  cin >> n;

  int a = 1, b = 1, i = 1;
  while (i < n) {
    int c = a + b;
    a = b;
    b = c;
    i ++;
  }

  cout << a << endl; */

  // do while
  /* int y = 1;
  do {
    cout << "y!" << endl;
  } while (y < 1);*/

  // for
  /* for (int i = 0; i < 10; i ++) {
    cout << i << endl;
  } */

  // break
  /* int n;
  cin >> n;

  bool is_prime = true;
  for (int i = 2; i < n; i ++) {
    if (n % i == 0) {
      is_prime = false;
      break;
    }
  }
  if (is_prime) cout << "yes" << endl;
  else cout << "no" << endl; */

  // continue
  /* int sum = 0;
  for (int i = 1; i <= 100; i ++) {
    if (i % 2 == 1) continue;
    sum += i;
  }
  cout << sum << endl; */

  // 多层循环
  /* for (int i = 0, k = 1; i < 10; i++) {
    for (int j = 0; j < 10; j++, k++) {
      cout << k << ' ';
    }
    cout << endl;
  } */

  // 1 - 100 所有质数
  /* for (int i = 2; i <= 100; i ++) {
    bool flag = true;
    for (int j = 2; j < i; j++) {
      if (i % j == 0) {
        flag = false;
        break;
      }
    }
    if (flag) cout << i << ' ';
  } */

  // 菱形
  int n;
  cin >> n;

  for (int i = 0; i < n / 2 + 1; i ++) {
    for (int j = 0; j < n / 2 + 1 + i; j ++) {
      if (j < n / 2 - i) cout << ' ';
      else cout << '*';
    }
    cout << endl;
  }

  for (int i = 0; i < n / 2; i ++) {
    for (int j = 0; j < n - i - 1; j ++) {
      if (j <= i) cout << ' ';
      else cout << '*';
    }
    cout << endl;
  }

  return 0; 
}
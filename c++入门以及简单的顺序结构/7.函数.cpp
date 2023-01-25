#include <bits/stdc++.h>
using namespace std;

int fact(int n) {
  if (n <= 1) return 1;
  return n * fact(n - 1);
}

void f(int &x) {
  x = 5;
}

int main() {
  /* int j = fact(5);
  cout << "5! is " << j << endl; */

  // 引用参数
  /* int i = 1;
  f(i);
  cout << i << endl; */

  // 函数递归
  int n;
  cin >> n;

  cout << fact(n) << endl;

  return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
  /* int a;
  cin >> a;

  if (a > 5) {
    cout << " > 5" << endl;
  } else {
    cout << "<= 5" << endl;
  } */

  // 输出绝对值
  /* int x;
  cin >> x;

  if (x > 0) cout << x << endl;
  else cout << -x << endl; */

  // 输出较大的数
  /* int a, b;
  cin >> a >> b;

  if (a > b) cout << a << endl;
  else cout << b << endl; */

  // 三个数中较大的数
  /* int a, b, c;
  cin >> a >> b >> c;

  if (a > b) {
    if (a > c) cout << a << endl;
    else cout << c << endl;
  } else {
    if (b > c) cout << b << endl;
    else cout << c << endl;
  } */

  // if-else连写
  /* int a;
  cin >> a;

  if (a >= 85) cout << 'A' << endl;
  else if (a >= 70) cout << 'B' << endl;
  else if (a >= 60) cout << 'C' << endl;
  else cout << 'D' << endl; */

  // 简单计算器
  /* int a, b;
  char c;
  cin >> a >> b >> c;

  if (c == '+') cout << a + b << endl;
  else if (c == '-') cout << a - b << endl;
  else if (c == '*') cout << a * b << endl;
  else if (c == '/') {
    if (b != 0) {
      cout << a / b << endl;
    } else {
      cout << "Divided by zero!" << endl;
    }
  } else {
    cout << "Invalid operator!" << endl;
  } */

  // 判断闰年
  /* int year;
  cin >> year;

  if (year % 100 == 0) {
    if (year % 400 == 0) cout << "yes" << endl;
    else cout << "no" << endl;
  } else {
    if (year % 4 == 0) cout << "yes" << endl;
    else cout << "no" << endl;
  } */

  // 条件表达式
  /* int a, b, c;
  cin >> a >> b >> c;

  if (a >= b && a >= c) cout << a << endl;
  else if (b >= a && b >= c) cout << b << endl;
  else cout << c << endl; */

  int year;
  cin >> year;

  if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) cout << "yes" << endl;
  else cout << "no" << endl;

  return 0;
}
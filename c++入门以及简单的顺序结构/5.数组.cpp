#include <bits/stdc++.h>
using namespace std;

int main() {
  // 访问数组元素
  /* int a[3] = {0, 1, 2};
  cout << a[0] << a[1] << a[2] << endl; */

  // 使用数组实现求斐波那契数列的第 N 项
  /* int n;
  cin >> n;
  int arr[100] = {0, 1};

  for (int i = 2; i <= n; i ++) {
    arr[i] = arr[i - 1] + arr[i - 2];
  }

  cout << arr[n] << endl; */

  // 输入一个 n，再输入 n 个整数。将这 n 个整数逆序输出
  /* int arr[100];
  int n;
  cin >> n;

  for (int i = 0; i < n; i ++) {
    cin >> arr[i];
  }

  for (int i = n - 1; i >= 0; i --) {
    cout << arr[i] << ' ';
  } */

  // 旋转
  /* int arr[100];
  int n, k;
  cin >> n >> k;

  for (int i = 0; i < n; i ++) {
    cin >> arr[i];
  }

  reverse(arr, arr + n);
  reverse(arr, arr + k);
  reverse(arr + k, arr + n);

  for (int i = 0; i < n; i ++ ) cout << arr[i] << ' ';

  // int tempArr[100];

  // for (int i = 0; i < n; i ++) {
  //   tempArr[(i + k) % n] = arr[i];
  // }

  // for (int i = 0; i < n; i ++) {
  //   cout << tempArr[i] << ' ';
  // }

  cout << endl; */

  // 排序
  /* int arr[100];
  int n;
  cin >> n;
  for (int i = 0; i < n; i ++) {
    cin >> arr[i];
  }

  // for (int i = 0; i < n - 1; i ++) {
  //   for (int j = 0; j < n - 1 - i; j ++) {
  //     if (arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);
  //   }
  // }

  for (int i = 0; i < n - 1; i ++) {
    for (int j = i + 1; j < n; j ++) {
      if (arr[i] > arr[j]) swap(arr[i], arr[j]);
    }
  }

  for (int i = 0; i < n; i ++) {
    cout << arr[i] << ' ';
  } */

  // 计算 2 的 N 次方
  /* int a[10000], size = 1, n;
  cin >> n;
  a[0] = 1;

  while (n --) {
    int t = 0;
    for (int i = 0; i < size; i ++) {
      int ad = a[i] * 2 + t;
      a[i] = ad % 10;
      t = ad / 10;
    }
    if (t) a[size ++] = t;
  }

  for (int i = size - 1; i >= 0; i --) {
    cout << a[i] << ' ';
  }

  cout << endl; */

  /* int a[3][4] = {
    {0, 3},
    {2, 4},
    {1, 7},
  };
  for (int i = 0; i < 3; i ++) {
    for (int j = 0; j < 4; j ++) {
      cout << a[i][j] << endl;
    }
  } */

  // 回形打印

  int i = 0, j = 0;
  

  return 0;
}
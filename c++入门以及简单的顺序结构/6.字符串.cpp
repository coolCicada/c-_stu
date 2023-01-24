#include <bits/stdc++.h>
using namespace std;

int main() {
  // 1. 字符与整数的联系——ASCII码
  /* char c = 'a';
  cout << (int)c << endl;

  int a = 66;
  cout << (char)a << endl; */

  /* int a = 'B' - 'A';
  int b = 'A' * 'B';
  char c = 'A' + 2;

  cout << a << ' ' << b << ' ' << c << endl; */

  /* string str;
  cin >> str;

  int cCount = 0;
  int sCount = 0;
  for (int i = 0; i < str.size(); i ++) {
    if (str[i] >= '0' && str[i] <= '9') cCount ++;
    else sCount ++;
  }

  cout << cCount << ' ' << sCount << endl; */

  // 2. 字符数组

  /* char str[5];
  fgets(str, 5, stdin);

  cout << str << endl; */

  /* char a[100] = "hello world!", b[100];
  cout << strlen(a) << endl;
  strcpy(b, a);
  cout << strcmp(a, b) << endl;
  for (int i = 0; i < strlen(a); i ++) {
    cout << a[i] << endl;
  } */

  /* char replaceC;
  cin >> replaceC;

  string a = "abcdefgaggga";
  cout << a << endl;

  int L = a.size();
  for (int i = 0; i < L; i ++) {
    if (a[i] == 'a') {
      a[i] = replaceC;
    }
  }
  cout << a << endl; */
  /* int arr[26] = {0};
  string str;
  cin >> str;

  for (int i = 0; i < str.size(); i ++) {
    arr[str[i] - 'a'] ++;
  }

  bool flag = false;
  for (int i = 0; i < str.size(); i ++) {
    if (arr[str[i] - 'a'] == 1) {
      flag = true;
      cout << str[i] << endl;
      break;
    }
  }

  if (!flag) cout << "no" << endl; */
  /* string str;
  getline(cin, str);

  cout << str; */

  /* string s1, s2 = "abc";
  cout << s1.empty() << s2.empty() << endl;
  cout << s2.size() << s1.size() << endl;
  cout << (s2.size() < -1) << (s2.size() <= -1) << (s2.size() > 0) << (1 < -1) << endl; */

  /* string s1 = "hello", s2 = "world";
  cout << s1 + s1 << endl; */
  /* string b = "a";
  string a = b + "a" + "b" + "c";
  cout << a << endl; */

  /* string s = "hello world";

  for (char c: s) cout << c << endl;
  for (char& c: s) c = 'a';
  cout << s << endl; */

  /* string str;
  cin >> str;

  for (int i = 0; i < str.size(); i ++) {
    str[i] = (str[i] + 1 - 'a') % 26 + 'a';
  }

  cout << str << endl; */

  return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
  string str;
  getline(cin, str);

  string temp = "";
  for (int i = 0; i < str.size(); i ++) {
    temp = temp + str[i] + ' ';
  }

  temp.pop_back();

  cout << temp << endl;

  return 0;
}
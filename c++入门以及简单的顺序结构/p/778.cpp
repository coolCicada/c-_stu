#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<string> arr(0);
  int n = 0;
  string temp;
  while(getline(cin, temp, ',')) {
    arr.push_back(temp);
    n ++;
  }

  string s = arr[0];
  string s1 = arr[1];
  string s2 = arr[2];

  if (s2.back() == '\n') s2.pop_back();
  int s1Index = s.find(s1);
  int s2Index = s.rfind(s2);

  if (s1Index == -1 || s2Index == -1) {
    cout << -1 << endl;
  } else {
    int r = s2Index - (s1Index + s1.size());
    if (r >= 0)
      cout << r << endl;
    else 
      cout << -1 << endl;
  }

  return 0;
}
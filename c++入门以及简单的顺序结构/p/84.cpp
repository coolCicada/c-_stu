#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int getSum(int n) {
      if (n == 1) return 1;
      return n + getSum(n - 1);
    }
};

int main() {
  Solution* s = new Solution();
  cout << s->getSum(10) << endl;
  return 0;
}
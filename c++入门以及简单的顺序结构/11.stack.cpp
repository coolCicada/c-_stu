#include <bits/stdc++.h>
using namespace std;

int main() {
  stack<int> stack;

  stack.push(1);
  stack.push(2);
  stack.push(3);

  int size = stack.size();

  for (int i = 0; i < size; i ++) {
    cout << stack.top() << endl;
    stack.pop();
  }

  return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
  queue<int> queue;
  queue.push(1);
  queue.push(2);
  queue.push(3);

  int size = queue.size();

  for (int i = 0; i < size; i ++) {
    cout << queue.front() << endl;
    queue.pop();
  }

  return 0;
}
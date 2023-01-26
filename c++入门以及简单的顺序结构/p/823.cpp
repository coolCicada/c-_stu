#include <bits/stdc++.h>
using namespace std;

int arr[10];
bool visitedArr[10] = {false};
int n;

void dfs(int count, vector<int> mylist);

int main() {
  cin >> n;

  vector<int> mylist;

  for (int i = 0; i < n; i ++) {
    arr[i] = i + 1;
  }

  dfs(0, mylist);

  return 0;
}

void dfs(int count, vector<int> mylist) {
  if (mylist.size() == n) {
    for (int i = 0; i < n; i ++) {
      cout << mylist[i] << ' ';
    }
    cout << endl;
    return;
  }

  for (int i = 0; i < n; i ++) {
    if (!visitedArr[i]) {
      visitedArr[i] = true;
      mylist.push_back(arr[i]);
      dfs(count + 1, mylist);
      mylist.pop_back();
      visitedArr[i] = false;
    }
  }
}
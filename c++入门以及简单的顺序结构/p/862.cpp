#include <bits/stdc++.h>
using namespace std;

struct T {
  int x;
  double y;
  string z;

  bool operator < (const T& t) const {
    return x < t.x;
  }
};

int main() {
  int n;
  cin >> n;
  vector<T> arr;
  for (int i = 0; i < n; i ++) {
    T t = T();
    cin >> t.x >> t.y >> t.z; 
    arr.push_back(t);
  }

  sort(arr.begin(), arr.end());

  for (int i = 0; i < n; i ++) {
    printf("%d %.2lf %s\n", arr[i].x, arr[i].y, arr[i].z.c_str());
  }

  return 0;
}
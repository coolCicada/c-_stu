#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n, q;
  cin >> n >> q;

  vector<int> arr(n), t(q);

  for (int i = 0; i < n; i ++) {
    cin >> arr[i];
  }

  for (int i = 0; i < q; i ++) {
    cin >> t[i];
  }

  for (int i = 0; i < t.size(); i ++) {

    int l = 0, r = arr.size() - 1;
    while (l < r) {
      int mid = l + r >> 1;
      if (arr[mid] >= t[i]) r = mid;
      else l = mid + 1;
    }

    if (arr[l] != t[i]) {
      cout << -1 << ' ' << -1 << endl;
      continue;
    }

    cout << l << ' ';
    
    l = 0, r = arr.size() - 1;
    while (l < r) {
      int mid = l + r + 1 >> 1;
      if (arr[mid] <= t[i]) l = mid;
      else r = mid - 1;
    }

    cout << l << endl;
  }


  return 0;
}
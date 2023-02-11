#include<bits/stdc++.h>

using namespace std;

int main() {
	int n, m, x;
	cin >> n >> m >> x;

	vector<int> a(n), b(m);
	for (int i = 0; i < n; i ++) {
		cin >> a[i];
	}
	for (int i = 0; i < m; i ++) {
		cin >> b[i];
	}

	for (int i = 0, j = m - 1; i < n; i ++) {
		while (a[i] + b[j] > x) j --;
		if (a[i] + b[j] == x) {
			cout << i << ' ' << j << endl;
			return 0;
		}
	}

	return 0;
}

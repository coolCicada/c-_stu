#include<bits/stdc++.h>

using namespace std;

const int N = 1e5 + 10;
int a[N], h = -1;

int main() {
	int m;
	cin >> m;

	while (m --) {
		int x;
		cin >> x;

		while (h != -1) {
			if (a[h] >= x) h --;
			else break;
		}

		if (h == -1) cout << -1 << ' ';
		else cout << a[h] << ' ';

		a[++ h] = x;
	}

	return 0;
}

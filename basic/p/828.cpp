#include<bits/stdc++.h>

using namespace std;

const int N = 100010;
int a[N], h = -1;

int main() {
	int m;
	cin >> m;

	while (m --) {
		string c;
		cin >> c;

		if (c == "push") {
			int x;
			cin >> x;

			a[++h] = x;
		} else if (c == "pop") {
			h --;
		} else if (c == "empty") {
			if (h > -1) cout << "NO" << endl;
			else cout << "YES" << endl;
		} else {
			cout << a[h] << endl;
		}
	}

	return 0;
}

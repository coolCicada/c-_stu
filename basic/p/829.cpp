#include<bits/stdc++.h>

using namespace std;

const int N = 100010;
int a[N], l = 0, r = -1;

int main() {
	int m;
	cin >> m;

	while (m --) {
		string c;
		cin >> c;

		if (c == "push") {
			int x;
			cin >> x;

			a[++ r] = x;
		} else if (c == "empty") {
			cout << (r >= l ? "NO" : "YES") << endl;
		} else if (c == "query") {
			cout << a[l] << endl;
		} else {
			l ++;
		}
	}

	return 0;

}

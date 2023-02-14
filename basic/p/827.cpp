#include<bits/stdc++.h>

using namespace std;

const int N = 100010;
int a[N], l[N], r[N], head = 0, tail = 1, idx = 2;
void init() {
	r[0] = 1;
	l[1] = 0;
}
void add(int k, int v) {
	a[idx] = v;
	l[idx] = k;
	r[idx] = r[k];
	l[r[k]] = idx;
	r[k] = idx ++;
}
void remove(int k) {
	r[l[k]] = r[k];
	l[r[k]] = l[k];
}
int main() {
	int m;
	cin >> m;
	init();
	while (m --) {
		string t;
		cin >> t;

		if (t == "R") {
			int x;
			cin >> x;
			add(l[1], x);
		} else if (t == "D") {
			int k;
			cin >> k;
			remove(k + 1);
		} else if (t == "L") {
			int x;
			cin >> x;
			add(0, x);
		} else if (t == "IL") {
			int k, v;
			cin >> k >> v;

			add(l[k + 1], v);
		} else {
			int k, v;
			cin >> k >> v;

			add(k + 1, v);
		}
	}

	for (int i = r[0]; i != 1; i = r[i]) {
		cout << a[i] << ' ';
	}

	return 0;

}

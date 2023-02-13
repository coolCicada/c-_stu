#include<bits/stdc++.h>

using namespace std;

vector<int> a(100010), l(100010), r(100010);
int idx = 2;
void add(int k, int v) {
	a[idx] = v;
	r[idx] = k;
	l[idx] = l[k];
	r[l[k]] = idx;
	l[k] = idx ++;
}

void remove(int k) {
	r[l[k]] = r[k];
	l[r[k]] = l[k];
}
int main() {
	int m;
	cin >> m;

	r[0] = 1;
	l[1] = 0;
	while (m --) {
		string t;
		cin >> t;

		if (t == "L") {
			int x;
			cin >> x;

			add(r[0], x);
		} else if (t == "R") {
			int x;
			cin >> x;

			add(1, x);
		} else if (t == "D") {
			int k;
			cin >> k;
			remove(k + 1);
		} else if (t == "IL") {
			int k, x;
			cin >> k >> x;

			add(k + 1, x);
		} else {
			int k, x;
			cin >> k >> x;

			add(r[k + 1], x);
		}
	}

//	for (int i = 0; i < 10; i ++) {
//		cout << a[i] << ' ' << l[i] << ' ' << r[i] << endl;
//	}
	for (int i = r[0]; i != 1; i = r[i]) {
		cout << a[i] << ' ';
	}
}

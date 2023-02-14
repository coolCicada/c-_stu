#include<bits/stdc++.h>

using namespace std;

const int N = 100010;
int a[N], na[N], idx = 1, head = 0;
void add_to_head(int v) {
	a[idx] = v;
	na[idx] = head;
	head = idx ++;
}

void insert(int k, int x) {
	a[idx] = x;
	na[idx] = na[k];
	na[k] = idx ++;
}

void remove(int k) {
	if (k == 0) {
		head = na[head];
	} else {
		na[k] = na[na[k]];
	}
}
int main() {
	int m;
	cin >> m;
	while (m --) {
		char t;
		cin >> t;

		if (t == 'H') {
			int x;
			cin >> x;
			add_to_head(x);
		} else if (t == 'I') {
			int k, x;
			cin >> k >> x;
			insert(k, x);
		} else {
			int k;
			cin >> k;
			remove(k);
		}
	}
	for (int i = head; i != 0; i = na[i]) {
		cout << a[i] << ' ';
	}
	return 0;
}

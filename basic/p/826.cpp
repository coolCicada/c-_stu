#include<bits/stdc++.h>

using namespace std;

int main() {
	int m;
	cin >> m;

	int head = 0, idx = 1;
	vector<int> v(100001), p(100001);
	while (m --) {
		char a;
		cin >> a;

		if (a == 'H') {
			int x;
			cin >> x;
			
			v[idx] = x;
			p[idx] = head;
			head = idx ++;
		} else if (a == 'I') {
			int k, x;
			cin >> k >> x;

			v[idx] = x;
			p[idx] = p[k];
			p[k] = idx ++;
		} else {
			int k;
			cin >> k;
			if (k == 0) {
				head = p[head];
			} else {
				p[k] = p[p[k]];
			}
		}
	}

	for (int i = head; i; i = p[i]) {
		cout << v[i] << ' ';
	}
	return 0;
}

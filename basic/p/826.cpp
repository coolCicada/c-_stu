#include<bits/stdc++.h>

using namespace std;

const int N = 100001;
int a[N], na[N];
int head = 0, idx = 1;

int main() {
	int m;
	cin >> m;

	while (m --) {
		char x;				
		cin >> x;
		if (x == 'H') {
			int v;
			cin >> v;
			a[idx] = v;
			na[idx] = head;
			head = idx ++;
		} else if (x == 'D') {
			int k;
			cin >> k;
			
			if (k == 0) head = na[head];
			else na[k] = na[na[k]];
		} else {

			int k, x;
			cin >> k >> x;

			a[idx] = x;
			na[idx] = na[k];
			na[k] = idx ++;
		}
	}

	for (int i = head; i;) {
		cout << a[i] << ' ';
		i = na[i];
	}

	return 0;
}

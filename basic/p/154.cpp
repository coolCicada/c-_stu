#include<bits/stdc++.h>

using namespace std;

const int N = 1e6 + 10;
int a[N], b[N], hh, tt = -1;

int main() {
	int n, k;
	cin >> n >> k;

	for (int i = 0; i < n ; i ++) {
		cin >> a[i];
	}

	for (int i = 0; i < n; i ++) {
		if (hh <= tt && b[hh] <= i - k) hh ++;
		while (hh <= tt && a[i] <= a[b[tt]]) tt --;
		b[++ tt] = i;
		
		if (i >= k - 1) cout << a[b[hh]] << ' ';
	}

	cout << endl;

	hh = 0, tt = -1;
	for (int i = 0; i < n; i ++) {
		if (hh <= tt && b[hh] <= i - k) hh ++;
		while (hh <= tt && a[i] >= a[b[tt]]) tt --;
		b[++ tt] = i;

		if (i >= k - 1) cout << a[b[hh]] << ' ';
	}
	return 0;
}

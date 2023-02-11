#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;

	while (t --) {
		int a;
		cin >> a;
		
		int r = 0;
		while (a) {
			r ++;
			a &= a - 1;
		}

		cout << r << ' ';
	}

	return 0;
}

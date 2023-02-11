#include<bits/stdc++.h>

using namespace std;

const int N = 1e5 + 10;
int arr[N];

int main() {
	int n;
	cin >> n;

	vector<int> a(n);
	for (int i = 0; i < n; i ++) {
		cin >> a[i];
	}

	int r = 0;
	for (int i = 0, j = 0; i < n; i ++) {
		arr[a[i]] ++;
		while (arr[a[i]] > 1) {
			arr[a[j]] --;
			j ++;
		}
		r = max(r, i - j + 1);
	}

	cout << r << endl;
	return 0;
}

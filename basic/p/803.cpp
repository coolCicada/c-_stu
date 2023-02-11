#include<bits/stdc++.h>

using namespace std;

typedef pair<int, int> PII;

int main() {
	int n;
	cin >> n;

	vector<PII> arr;
	while (n --) {
		int a, b;
		cin >> a >> b;

		arr.push_back(make_pair(a, b));
	}

	sort(arr.begin(), arr.end());
	vector<PII> res;
	int start = -2e9, end = -2e9;
	for (int i = 0; i < arr.size(); i ++) {
		if (end < arr[i].first) {
			if (end != -2e9) {
				res.push_back(make_pair(start, end));
			}
			start = arr[i].first, end = arr[i].second;
		} else {
			end = max(end, arr[i].second);
		}
	}
	if (end != -2e9) {
		res.push_back(make_pair(start, end));
	}

	cout << res.size() << endl;

	return 0;
}

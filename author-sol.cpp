#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		vector<int> dp(n);
		for (int i = n - 1; i >= 0; i--) {
			dp[i] = a[i];
			int j = i + a[i];
			if (j < n) {
				dp[i] += dp[j];
			}
		}
		cout << *max_element(dp.begin(), dp.end()) << '\n';
	}
	return 0;
}

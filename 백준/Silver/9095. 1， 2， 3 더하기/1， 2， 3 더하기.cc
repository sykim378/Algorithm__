#include <iostream>
#include <vector>

using namespace std;

int main() {
	int T;
	cin >> T;
	vector<int> n;
	vector<int> dp;
	vector<int> n_arr;

	

	for (int k = 0; k < T; k++) {
		int tmp;
		cin >> tmp;
		n.push_back(tmp);
	}
	for (int k = 0; k < T; k++) {
		dp.clear();
		dp.push_back(0);
		dp.push_back(1);
		dp.push_back(2);
		dp.push_back(4);
		for (int i = 4; i < n[k] + 1; i++) {
			dp.push_back(dp[i - 1] + dp[i - 2] + dp[i - 3]);
		}
		cout << dp[n[k]] << '\n';
	}
}
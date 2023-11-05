#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> dp;

	dp.push_back(0);
	dp.push_back(1);
	dp.push_back(3);

	for (int i = 3; i < n + 1; i++) {
		dp.push_back((dp[i - 1] + 2 * dp[i - 2]) % 10007);
	}
	cout << dp[n];
}
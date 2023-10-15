#include <iostream>
#include <vector>
using namespace std;

int N = 0;
int K = 0;
int v[101]{};
long dp[10001]{};

int main() {
	cin >> N;
	cin >> K;
	dp[0] = 1;

	for (int i = 1; i <= N; i++) {
		cin >> v[i];
	}

	for (int i = 1; i <= N; i++) {
		for (int j = v[i]; j <= K; j++) {
			dp[j] = dp[j] + dp[j - v[i]];
		}
	}

	cout << dp[K];
}
//https://howudong.tistory.com/58 참고
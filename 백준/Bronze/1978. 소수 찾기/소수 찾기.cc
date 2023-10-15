#include <iostream>

using namespace std;

int main() {
	int N;
	int num[100] = { 0 };
	int result = 0;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> num[i];
	}

	for (int i = 0; i < N; i++) {
		int cnt = 0;
		for (int j = 1; j <= num[i]; j++) {
			int tmp_num = num[i] % j;
			if (tmp_num == 0)
				cnt++;
		}
		if (cnt == 2)
			result++;
	}

	cout << result << endl;
}
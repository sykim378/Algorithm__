#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int N;
	vector<int> num;
	cin >> N;

	for (int i = 0; i < N; i++) {
		int tmp;
		cin >> tmp;
		num.push_back(tmp);
	}

	sort(num.begin(),num.end());

	for (int i = 0; i < N; i++) {
		cout << num[i] << '\n';
	}
	return 0;
}
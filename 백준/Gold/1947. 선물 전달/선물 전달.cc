#include <iostream>

using namespace std;
int N;
long long int arr[1000001]{};

int main() {
	cin >> N;

	arr[2] = 1;
	arr[3] = 2;

	for (int i = 4; i < N+1; i++) {
		arr[i] = ((arr[i - 1] + arr[i - 2]) * (i - 1)) % 1000000000;
	}

	cout << arr[N];
	return 0;
}
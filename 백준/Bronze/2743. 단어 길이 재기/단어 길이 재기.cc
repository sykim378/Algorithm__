#include <iostream>

using namespace std;

int ArrayLen(char* arr) {
	int count = 0;
	for (int i = 0; i < 101; i++) {
		if (arr[i] == 0)
			break;
		else
			count++;
	}
	return count;
}

int main() {
	char arr[101] = { 0, };
	int index = 0;
	
	cin >> arr;
	cout << ArrayLen(arr);
}
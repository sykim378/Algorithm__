#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	string sub_str;
	string command;
	int rightRange;
	const int leftRange = 0;
	int currentCursorPosition = 0;
	int M;

	cin >> str;
	cin >> M;
	cin.ignore();

	rightRange = str.size();
	currentCursorPosition = rightRange;

	for (int i = 0; i < M; i++) {
		getline(cin, command);

		if (command[0] == 'L') {
			if(currentCursorPosition > leftRange)
				currentCursorPosition--;
		}
		else if (command[0] == 'D') {
			if (currentCursorPosition < rightRange)
				currentCursorPosition++;
		}
		else if (command[0] == 'B') {
			if (currentCursorPosition > leftRange) {
				sub_str = str.substr(currentCursorPosition);
				str.resize(str.size() - 1);
				currentCursorPosition--;
				str.replace(currentCursorPosition, sub_str.size(), sub_str);
				rightRange--;
			}
			else if (currentCursorPosition == rightRange) {
				str.pop_back();
				currentCursorPosition--;
				rightRange--;
			}
		}
		else if (command[0] == 'P') {
			if (currentCursorPosition == rightRange) {
				str.append(1, command[2]);
				currentCursorPosition++;
				rightRange++;
			}
			else {
				sub_str = str.substr(currentCursorPosition);
				str[currentCursorPosition] = command[2];
				str.resize(str.size() + 1);
				currentCursorPosition++;
				str.replace(currentCursorPosition, sub_str.size(), sub_str);
				rightRange++;
			}
		}
	}

	cout << str << '\n';
	
	return 0;
}

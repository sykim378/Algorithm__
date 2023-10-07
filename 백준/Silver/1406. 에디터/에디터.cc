#include <iostream>
#include <string>
#include <stack>
#include <algorithm>

using namespace std;

int main() {
	string str;
	string command;
	string result;

	stack<char> str_stack;
	stack<char> tmp;

	int M;

	cin >> str;
	cin >> M;
	cin.ignore();

	for (int i = 0; i < str.size(); i++)
		str_stack.push(str[i]);

	for (int i = 0; i < M; i++) {
		getline(cin, command);

		if (command[0] == 'L') {
			if (!str_stack.empty()) {
				tmp.push(str_stack.top());
				str_stack.pop();
			}
		}
		else if (command[0] == 'D') {
			if (!tmp.empty()) {
				str_stack.push(tmp.top());
				tmp.pop();
			}
		}
		else if (command[0] == 'B') {
			if (!str_stack.empty()) {
				str_stack.pop();
			}
		}
		else if (command[0] == 'P') {
			str_stack.push(command[2]);
		}
	}

	if (!tmp.empty()) {
		int tmp_size = tmp.size();
		for (int i = 0; i < tmp_size; i++) {
			str_stack.push(tmp.top());
			tmp.pop();
		}
	}

	int size = str_stack.size();
	for (int i = 0; i < size; i++) {
		result.append(1, str_stack.top());
		str_stack.pop();
	}

	reverse(result.begin(), result.end());

	cout << result << '\n';

	return 0;
}
#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
	string Parentheses;
	int T;
	bool isVPS = false;
	bool isEnd = false;
	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> Parentheses;
		stack<char> leftParenthesis_stack;

		for (int j = 0; j < Parentheses.size(); j++) {
			if (Parentheses[j] == '(') {
				leftParenthesis_stack.push(Parentheses[j]);
			}
			else if (Parentheses[j] == ')') {
				if (leftParenthesis_stack.empty()) {
					isEnd = false;
					break;
				}
				else {
					leftParenthesis_stack.pop();
				}
			}
			if (j + 1 == (int)Parentheses.size()) isEnd = true;
		}

		if (leftParenthesis_stack.empty() && isEnd) {
			isVPS = true;
		}
		else {
			isVPS = false;
		}
		
		if (isVPS) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
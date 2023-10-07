#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
	vector<int> sequence;
	vector<char> symbol;
	stack<int> stack;

	int sequence_index = 0;
	int T;
	int numASC = 1;

	bool Ok = false;

	cin >> T;

	for (int i = 0; i < T; i++) {
		int num;
		cin >> num;
		sequence.push_back(num);
	}

	while(1){
		if (stack.empty()) {
			stack.push(numASC++);
			symbol.push_back('+');
		}
		else {
			
			if (sequence[sequence_index] == stack.top()) {
				stack.pop();
				sequence_index++;
				symbol.push_back('-');

				if (sequence_index == sequence.size()) {
					Ok = true;
					break;
				}
			}
			else {
				stack.push(numASC++);
				symbol.push_back('+');
			}


			if (!stack.empty()) {
				if (sequence[sequence_index] < stack.top()) {
					Ok = false;
					break;
				}
			}
		}
	}

	if (Ok) {
		for (int i = 0; i < symbol.size(); i++) {
			cout << symbol[i] << '\n';
		}
	}
	else {
		cout << "NO" << endl;
	}
}
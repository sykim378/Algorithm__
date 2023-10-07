#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class Stack {
private:
	int n[10000];
	int count;
public:
	Stack() {
		memset(n, 0, sizeof(int));
		count = 0;
	}

	void push(int num) {
		n[count++] = num;
	}
	int pop() {
		if (count != 0) return n[--count];
		else return -1;
	}
	int size() {
		return count;
	}
	int empty() {
		if (count != 0) return 0;
		else return 1;
	}
	int top() {
		if (count == 0) return -1;
		else return n[count-1];
	}
};

int main() {
	int command_num;
	cin >> command_num;

	string command;
	Stack s;
	string str;

	for (int i = 0; i < command_num; i++) {
		cin >> command;
		if (command == "push") {
			int num;
			cin >> num;
			s.push(num);
		}
		else if (command == "pop") cout << s.pop() << endl;
		else if (command == "size") cout << s.size() << endl;
		else if (command == "empty") cout << s.empty() << endl;
		else if (command == "top") cout << s.top() << endl;
	}

	return 0;
}

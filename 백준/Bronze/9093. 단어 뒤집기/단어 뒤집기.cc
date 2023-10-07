#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
	int num;
	string str;
	char ch[21] = {};

	cin >> num;
	cin.ignore();

	for (int i = 0; i < num; i++) {
		getline(cin, str);
		
		int c = 0;

		for (int j = 0; j < str.size(); j++) {
			ch[c] = str[j];

			if (j == (int)(str.size() - 1)) {
				for (int k = 0; k < c + 1; k++) {
					cout << ch[c - k];
				}
				break;
			}

			if (ch[c] == (char)' ') {
				for (int k = 0; k < c; k++) {
					cout << ch[c - 1 - k];
				}
				cout << ch[c];
				c = 0;
				continue;
			}
			c++;
		}
		cout << endl;
	}
	return 0;
}
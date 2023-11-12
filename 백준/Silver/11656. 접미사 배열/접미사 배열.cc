#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	string str;
	vector<string> arr;
	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		string temp = str.substr(i, str.length());;
		arr.push_back(temp);
	}

	sort(arr.begin(), arr.end());
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << "\n";
	}
}
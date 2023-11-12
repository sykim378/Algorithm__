#include<iostream>
#include<vector>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	string s1, s2, s3, s4;
	long long n1, n2;
	cin >> s1;
	cin >> s2;
	cin >> s3;
	cin >> s4;

	s1 += s2;
	s3 += s4;

	n1 = stoll(s1);
	n2 = stoll(s3);

	cout << n1 + n2;
	return 0;
}
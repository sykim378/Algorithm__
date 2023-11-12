#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string src;
    string dst;

    getline(cin, src);

    for (int i = 0; i < src.length(); i++) {
        if (src[i] >= 'a' && src[i] <= 'z') {

            if ((char)(src[i] + 13) > 'z' || (char)(src[i] + 13) < 'a')
                dst.push_back((char)(src[i] - 13));
            else
                dst.push_back((char)(src[i] + 13));

        }
        else if (src[i] >= 'A' && src[i] <= 'Z') {

            if ((char)(src[i] + 13) > 'Z')
                dst.push_back((char)(src[i] - 13));
            else
                dst.push_back((char)(src[i] + 13));
        }
        else if (src[i] == ' ') {
            dst.push_back(' ');

        }
        else {
            dst.push_back(src[i]);
        }
    }

    cout << dst;
    return 0;
}
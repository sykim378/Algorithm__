#include<iostream>
#define N 9

using namespace std;

int arr[N];

int getMaxIdx() {
    int max = 0;
    int idx = 0;

    for (int i = 0; i < N; i++) {
        if (arr[i] >= max) {
            max = arr[i];
            idx = i;
        }
    }

    return idx;
}

int main(void) {

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int idx = getMaxIdx();

    cout << arr[idx] << endl;
    cout << idx + 1;

    return 0;

}

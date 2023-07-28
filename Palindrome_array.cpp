#include <iostream>
using namespace std;

bool palindrome(int arr[], int n) {
    bool flag = true;
    int s = 0;
    int e = n - 1;
    while (s <= e) {
        if (arr[s] != arr[e]) {
            flag = false;
            break;
        } else {
            flag = true;
        }
        s++;
        e--;
    }

    if (flag) {
        cout << "Yes, a palindrome";
    } else {
        cout << "Not a palindrome";
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    palindrome(arr, n);

    return 0;
}

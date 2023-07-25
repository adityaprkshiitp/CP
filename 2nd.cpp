#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // #ifndef ONLINE_JUDGE
    // freopen("error.txt", "w", stderr);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    string numberStr;
    cout << "Enter a number as a string: ";
    cin >> numberStr;

    vector<int> digits;

    for (char c : numberStr) {
        if (isdigit(c)) {
            digits.push_back(c - '0');
        }
    }

    cout << "Digits as single-digit integers: ";
    for (int digit : digits) {
        cout << digit << " ";
    }
    cout << endl;

    return 0;
}

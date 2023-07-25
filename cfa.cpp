#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long getMaxScore(vector<int>& troops) {
    int n = troops.size();
    long long score = 0;
    int turns = 1;

    while (!troops.empty()) {
        int left = troops.front();
        int right = troops.back();

        if (left >= right) {
            score += 1LL * left * turns;
            troops.erase(troops.begin());
        } else {
            score += 1LL * right * turns;
            troops.pop_back();
        }

        turns++;
    }

    return score;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t; // Number of test cases
    cin >> t;

    while (t--) {
        int n; // Number of troops
        cin >> n;

        vector<int> troops(n);
        vector<int> digits(n);
        string numberStr;
        for (int i = 0; i < n; i++)
        {
            cin >> numberStr[i];
        }
        
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

        // int k = 0;
        // for (int digit : digits) {
        //     troops[k] = digit;
        //     k++;
        // }

        // for (int i = 0; i < k; i++)
        // {
        //     cout << troops[i] << " ";
        // }
        // cout << endl;
        


        long long maxScore = getMaxScore(troops);
        cout << maxScore << endl;
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long getMaxScore(vector<int>& troops) {
    int n = troops.size();
    long long score = 0;
    int turns = 1;

    int maximum = *max_element(troops.begin(),troops.end());
    for (int i = 0; i < n; i++)
    {
        score += (min(troops.back(),troops.front()) * (i+1)) + maximum;
        if(troops.back() < troops.front()){
            troops.pop_back();
        }else{
            troops.erase(troops.begin());
        }
        // cout << "score : " << score << endl;
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
        vector<int> digits;
        string numberStr;
        cin >> numberStr;
        
        for (char c : numberStr) {
            if (isdigit(c)) {
                int x = c - '0';
                digits.push_back(x);
            }
        }

        int k = 0;
        for (int digit : digits) {
            troops[k] = digit;
            // cout << troops[k] << " ";
            k++;
        }
        


        long long maxScore = getMaxScore(troops);
        cout << maxScore << endl;
    }

    return 0;
}
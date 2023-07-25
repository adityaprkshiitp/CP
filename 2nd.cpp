#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'minimumNumber' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. STRING password
 */

int minimumNumber(int n, string password) {
    // Return the minimum number of characters to make the password strong
    int strong = 6;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if(password[i] >= 'A' && password[i] <= 'Z'){
            strong--;
            count++;
            cout << "pswd[i] : " << password[i] << endl;
            break;
        }
    }
    for (int i = 0; i < n; i++) {
        if(password[i] >= 'a' && password[i] <= 'z'){
            strong--;
            count++;
            cout << "pswd[i] : " << password[i] << endl;
            break;
        }
    }
    for (int i = 0; i < n; i++) {
        if(password[i] >= '0' && password[i] <= '9'){
            strong--;
            count++;
            cout << "pswd[i] : " << password[i] << endl;
            break;
        }
    }
    for (int i = 0; i < n; i++) {
        if(password[i] >= '!' && password[i] <= '+' || password[i] == '-'){
            strong--;
            count++;
            cout << "pswd[i] : " << password[i] << endl;
            break;
        }
    }
    
    cout << "count : " << count << endl;
    if(n>=6){
        return (4 - count);
    }else if(4 - count + n >= 6){
        return (4 - count);
    }else{
        return 6 - n;
    }

}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string password;
    getline(cin, password);

    int answer = minimumNumber(n, password);

    fout << answer << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

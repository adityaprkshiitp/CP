#include <bits/stdc++.h>

using namespace std;

#define MAX_STRING 1000;


string pangrams(string s) {
    int arr[26] = {0};
    int n = s.size();
    arr[s[0] - 'A']++;
    for (int i = 1; i < n; i++) {
        if(s[i] >= 'a' && s[i] <= 'z'){arr[s[i]-'a']++;}
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            arr[s[i]-'A']++;
            cout <<" cap : " <<s[i] - 'A' << endl;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        cout << arr[i] << " ";
    }
    
    sort(arr,arr+26);
    // cout << arr[0];
    if(arr[0] == 0){
        return "not pangram";
    }else{
        return "pangram";
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    string s;
    getline(cin, s);
    string res = pangrams(s);
    cout << res << endl;


    return 0;
}

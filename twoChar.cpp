#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

string deleteRep(string s,char x,int n){
    for (int i = 0; i < n; i++) {
        if(s[i] == x){
            s.erase(i);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << s[i] << " ";
    }
    
    return s;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n; scanf("%d",&n);
    string s;
    // cout << "lol";
    for (int i = 0; i < n; i++)
    {
        scanf("%c",&s[i]);
    }
    int res;

    for (int i = 0; i < n - 1; i++) {
        if(s[i] == s[i+1]){
            s = deleteRep(s,s[i],n);
        }
    }
    // cout << "lauda";
    int arr[26] = {0};
    for (int i = 0; i < n; i++) {
        arr[s[i] - 'a']++;
    }
    // for (int i = 0; i < 26; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
    
    sort(arr,arr+26);
    // for (int i = 0; i < 26; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    printf("%d",arr[25] + arr[24]);
    
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<ll> vec;

#define MAX_STRING 1000;

vec scores(set<char> mid, vec arr){
    vec score;
    ll mid_size = mid.size();
    vec res(mid.begin(),mid.end());
    // for (int i = 0; i < mid_size; i++)
    // {
        // cout << "hehe : " << res[i];
    // }
    // cout << endl;
    
    for (ll i = 0; i < mid_size; i++)
    {
        ll base = ((res[i] - 'a')+1);
        // cout << "lauda : " << base;
        // cout << "arr[i] : " << arr[i] << endl;
        while(arr[i]--){
            score.push_back(base*(arr[i]+1));
            // cout << "lund : " << base*(arr[i]+1);
        }
    }
    
    return score;
}

vec weightString(string s, vec vec1, ll q){
    ll arr[26] = {0};
    set<char> mid;
    ll s_size = s.size();
    vec res;
    for (ll i = 0; i < s_size; i++)
    {
        mid.insert(s[i]);
        arr[s[i] - 'a']++;
    }
    vec arr1;
    for (int i = 0; i < 26; i++)
    {
        if(arr[i]){
            arr1.push_back(arr[i]);
        }
    }
    
    vec possibleScores = scores(mid,arr1);
    return possibleScores;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    string s;
    cin >> s;
    ll n; scanf("%lld",&n);
    vec vec1;
    for (ll i = 0; i < n; i++)
    {
        ll temp;
        scanf("%lld",&temp);
        vec1.push_back(temp);
    }
    
    vec res = weightString(s,vec1,n);
    int res_size = res.size();
    // for (int i = 0; i < res_size; i++)
    // {
    //     cout << res[i] << " ";
    // }
    // cout << endl;

    for (ll i = 0; i < n; i++)
    {
        
        bool check = false;
        for (ll j = 0; j < res_size; j++)
        {
            if(vec1[i] == res[j]){
                check = true;
                // cout << "Yes : " << vec1[i] << endl;
                cout << "Yes" << endl;
                j = res_size;
            }
        }
        if(!check){
            // cout << "No : " << vec1[i] << endl;
            cout << "No" << endl;
        }
    }
    
    


    return 0;
}

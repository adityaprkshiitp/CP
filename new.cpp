#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<ll> vec;

#define MAX_STRING 1000;

vec scores(set<char> mid, int arr[]){
    vec score;
    int mid_size = mid.size();
    vec res(mid.begin(),mid.end());
    
    for (int i = 0; i < mid_size; i++)
    {
        ll base = ((res[i] - 'a')+1);
        while(arr[i]--){
            score.push_back(base);
        }
    }
    
    return score;
}

vector<string> weightString(string s, vec vec1){
    int arr[26] = {0};
    set<char> mid;
    int s_size = s.size();
    vec res;
    for (int i = 0; i < s_size; i++)
    {
        mid.insert(s[i]);
        arr[s[i] - 'a']++;
    }
    

    vec possibleScores = scores(mid,arr);
    cout << "londa";
    int m = possibleScores.size();
    int q = vec1.size();
    vector<string> ans;
    for (int i = 0; i < q; i++)
    {
        bool check = false;
        for (int j = 0; j < m; j++)
        {
            if(vec1[i] == possibleScores[j]){
                check = true;
                ans[i] = "YES";
                continue;
            }
        }
        if(!check){
            ans[i] = "NO";
        }
    }
    
    return ans;
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
    cout << "lauda";
    for (int i = 0; i < n; i++)
    {
        ll temp;
        scanf("%lld",&temp);
        vec1.push_back(temp);
    }
    
    vector<string> res = weightString(s,vec1);
    for (int i = 0; i < n; i++)
    {
        cout << res[i] << endl;
    }
    


    return 0;
}

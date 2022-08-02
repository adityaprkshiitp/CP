#include<bits/stdc++.h>
#include<string.h>
#include<string>
using namespace std;
int main()

{
    #ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    string s;
    cin>>s;
    int count=0;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] >= 97 && s[i] <= 122)
        {
            count++;
            char c = s[i];
            
        }
    }
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            if(c[i]==c[j])
            {
                count--;
            }
        }
        
    }
    cout<<count;
    return 0;
    
    
}
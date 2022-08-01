#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    /// for taking input and output
    #ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    string s;
    cin>>s;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
        {
            cout<<" ";
            i=i+2;
        }
        else
        {
            cout<<s[i];
        }
    };
    
return 0;
}
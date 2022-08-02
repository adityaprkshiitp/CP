#include<bits/stdc++.h>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    for(int i=1; i <= t;i++)
    {
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='B' && s[i+1]=='G')
            {
                swap(s[i],s[i+1]);
                i++;
                //cout<<s<<"\n";
            }
        }
    }
    //cout<<"This  is final "<<s;
    cout<<s;
    return 0;
}
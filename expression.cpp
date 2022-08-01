#include<bits/stdc++.h>
using namespace std;

// Defining the binary function
bool comp(int a, int b)
{
 return (a < b);
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int a,b,c;
    cin>>a>>b>>c;
    int d=a+b*c;
    int e=a*(b+c);
    int f=a*b*c;
    int g=(a+b)*c;
    int h=a+b+c;
    int x=max({d, e, f, g, h},comp);
    cout<<x;
    return 0;
}
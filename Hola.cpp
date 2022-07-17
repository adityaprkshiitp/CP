#include<iostream>
using namespace std;

int main()
{
    int t;
    int n,m,sum=0;
    int a[n];
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>n>>m>>endl;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            sum=sum+a[i];
        }       
    }
    if (sum<m)
    {
        cout<<"0"<<endl;
    }
    else
    {
        cout<<sum-m<<endl;
    }
    return 0;
}
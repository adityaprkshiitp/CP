#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    int a[n][2];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin>>a[i][j];
        }
    }
    // cout<<"This is the array\n";
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         cout<<"a["<<i<<"]["<<j<<"] = "<<a[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }

    //conditions
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][0]==a[j][1])
            {
                count++;
            }
            
        }
        
    }
    cout<<count;
    return 0;
}
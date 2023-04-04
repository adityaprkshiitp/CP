// #include<iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n,m,count=0;
//     cout<<"Enter n and m with a space : ";
//     cin>>n>>m;
//     int a[n][m];
//     cout<<"Enter the array";
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin>>a[i][j];
//         }
        
//     }
    
//     cout<<"This is the array";
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cout<<a[i][j]<<" ";
//         }
//         cout<<"\n";
//     }
    
//     for (int i = 0; i < n-1; i++)
//     {
//         for (int j = 0; j < m-1; j++)
//         {
//             if (i=j)
//             {
//                 count++;
//             }
            
//         } 
//     }
//     cout<<"COUNT : "<<count;
//     if(count%2==0)
//     {
//         cout<<"\nMalvika";
//     }
//     else
//     {
//         cout<<"Akshat";
//     }
//     return 0;
// }
#include<iostream>
using namespace std;
int main()
{
    int n,m,count=0;
    cin>>n>>m;
    if (n<m)
    {
        count=n;
    }
    else
    {
        count=m;
    }
    if (count%2==0)
    {
        cout<<"Malvika";
    }
    else
    {
        cout<<"Akshat";
    }
    
    return 0;
    
}
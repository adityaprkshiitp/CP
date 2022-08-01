#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int b1,b2,n1,n2;
    int n;
    //cout<<"Enter size : ";
    cin>>n;
    int arr[n],arr1[n];
    //cout<<"Enter heights : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    //storing the array
    for (int i = 0; i < n; i++)
    {
        arr1[i]=arr[i];
    }

    // sort
    sort(arr, arr + n);
    int max=arr[n-1],min=arr[0];
    //cout<<"Max : "<<max<<"\nMin : "<<min;

    // traversing for max and min
    for (int i = 0; i < n; i++)
    {
        if(arr1[i]==max)
        {
            n1=i;
            b1=i;
            break;
        }
    }
    for (int i = n-1; i >= 0; i--)
    {
        if (arr1[i]==min)
        {
            n2=i;
            b2=n-i-1;
            break;
        }
    }
    

    //output condition
    //cout<<"\nTime Taken : "<<b1+b2<<" seconds";
    if(n2<n1)
    {
        cout<<b1+b2-1;
    }
    else
    {
        cout<<b1+b2;
    }

    return 0;
}
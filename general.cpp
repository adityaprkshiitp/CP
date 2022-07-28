#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size : ";
    cin>>n;
    int arr[n],arr1[n];
    cout<<"Enter heights : ";
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
    cout<<"Max : "<<max<<"\nMin : "<<min;
    
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int numcoin,temp,count=0,sum=0,rem=0,i,j;
    // cout<<"Enter number of coins\n";
    cin>>numcoin;
    int arr[numcoin];
    // cout<<"Enter the value of coins\n";
    for(i=0;i<numcoin;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    // cout<<"The sum is "<<sum<<endl;
    // kinda sorting
    for(i=0;i<numcoin-1;i++)
    {
    for(j=0;j<numcoin-i-1;j++)
    {
    if(arr[j]>arr[j+1])
    {
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
    }
    }
    }
    //final count
    while(sum>=rem)
    {
    rem=rem+arr[numcoin-1];
    sum=sum-arr[numcoin-1];
    count++;
    numcoin--;
    }
    cout<<count;
    return 0;
}
#include<iostream>
using namespace std;

int main()
{
    int n;
    //cout<<"Enter size : ";
    cin>>n;
    int list[n],s[n];
    //cout<<"Enter values : ";
    for (int i = 0; i < n; i++)
    {
        cin>>list[i];
    }
    //cout<<"Entered values : ";
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<list[i]<<" ";
    // }
    for (int i = 0; i < n; i++)
    {
        s[list[i]-1]=i+1;
    }
    //cout<<"\nSolution : ";
    for (int i = 0; i < n; i++)
    {
        cout<<s[i]<<" ";
    }
    
    
    return 0;
    
}
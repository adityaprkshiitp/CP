#include<iostream>
using namespace std;
int main()
{
    int n,count=0,i,j;
    cout<<"Enter the no.of people  :  ";
    cin>>n;
    string a[n];
    cout<<"Enter age or drink name\n";
    for (j = 0; j < n; j++)
    {
        cin>>a[j];
        // cout<<a[i]<<endl;
    }
    for ( i = 0; i < n; i++)
    {
        if( a[i] = 'ABSINTH' || a[i] = "BEER" || a[i] == "BRANDY" , a[i] == "CHAMPAGNE" ,a[i] == "GIN" ,a[i] 
        == "RUM" ,a[i] == "SAKE" ,a[i] == "TEQUILA",a[i] == "VODKA",a[i] == "WHISKEY",a[i] == "WINE")
        {
            cout<<"HELLO";
            count++;
        }
    }
    
    cout<<count;
    return 0;
}
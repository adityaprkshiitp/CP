#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int i,n=1,count;
    char a[100];
    
    // input
    // cout<<"Enter the char"<<endl;
    cin >> a;
    
    // conditions
    for ( i = 0; i < 100; i++)
    {
        if(a[i]=='h')
        {
            do
            {
                cout<<"YES";
                n++;
                count++;
                cout<<count;
                continue;
            } while (a[i+n] == 'h');
            
        }
    }
    
}
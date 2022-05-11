#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int i;
    char a[100];
    
    // input
    // cout<<"Enter the char"<<endl;
    cin >> a;
    
    // conditions
    for ( i = 0; i < strlen(a); i++)
    {
        if(a[i] == 'h')
        {
            if(a[i+1] == 'h' || a[i+1] == 'e')
            {
                if(a[i+2] == 'h' || a[i+2] == 'e' || a[i+2] == 'l')
                {
                    if(a[i+3] == 'h' || a[i+3] == 'e' || a[i+3] == 'l' || a[i+3] == 'l')
                    {
                        if(a[i+4] == 'h' || a[i+4] == 'e' || a[i+4] == 'l' || a[i+4] == 'l' || a[i+4] == 'o')
                        {
                            cout<<"YES";
                            break;
                        }
                        else
                        {
                            cout<<"NO";
                            break;
                        }
                    }
                }
            }
        }
    }
    
}
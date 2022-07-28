#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    char s[100];
    int i,j,k,l,m;
    scanf("%s",s);
    int count = 10;
    for (int i = 0; i < count; i++)
    {
        if(s[i]=='h')
        {
            cout<<"YES";
            for(j=i+1;s[j]!='\0';j++)
            {    
                if(s[j]=='e')
                {
                    cout<<"YES!";
                    return 0;
                }    
            }    
        }
    }
    
    cout<<"NO";
}
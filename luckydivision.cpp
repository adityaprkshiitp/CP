#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main(){
    char s[100];
    cin>>s;
    for(int i=0 ; i <= 4; i++)
    {
        if(s[i]=='4' && s[i]=='7')
        {
            cout<<"YES";
            break;
        }
        int x=s[i]/4 , y=s[i]/7;
        if(x%2==0 || y%2==0)
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
    return 0;
}
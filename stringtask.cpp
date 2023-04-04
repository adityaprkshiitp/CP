#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main(){
    char s[100];
    cin >> s;
    int i = strlen(s);
    for(int n=0; n < i ; n++){
       if(s[n]>='A' && s[n]<='Z')
        {
           s[n]=s[n]+32 ;
        }
        if(s[n]!='a' && s[n]!='e' && s[n]!='i' && s[n]!='o' && s[n]!='u' && s[n]!='y')
        {
            cout<<"."<<s[n];
        }
        else
        {
            cout<<"";
        }
    }
    cout<<endl;
    return 0;
}
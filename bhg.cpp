#include<iostream>
#include<string.h>
using namespace std;
 
int main()
{
    string word="hello";
    string t;
    cin>>t;
    int l=t.length();
 
    int a=0,count=0;
 
    for(int i=0;i<l;i++)
    {
        if(t[i]==word[a])
        {
           a++;
            count++;
        }
    
    if(count==5)
    {
       cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
    }
}
#include<iostream>
using namespace std;
int main()
{
    int a1[5],a2[5],a3[5],a4[5],a5[5];
    
    // input
    cin>>a1[1]>>a1[2]>>a1[3]>>a1[4]>>a1[5];
    cin>>a2[1]>>a2[2]>>a2[3]>>a2[4]>>a2[5];
    cin>>a3[1]>>a3[2]>>a3[3]>>a3[4]>>a3[5];
    cin>>a4[1]>>a4[2]>>a4[3]>>a4[4]>>a4[5];
    cin>>a5[1]>>a5[2]>>a5[3]>>a5[4]>>a5[5];

    // conditions
    if(a1[1]==1 || a1[5]==1 || a5[1]==1 || a5[5]==1)
    {
        cout<<"4";
    }
    if(a1[2]==1 || a1[4]==1 || a5[2]==1 || a5[4]==1 || a2[1]==1 || a2[5]==1 || a4[1]==1 || a4[5]==1)
    {
        cout<<"3";
    }
    if(a1[3]==1 || a5[3]==1 || a3[1]==1 || a3[5]==1 || a2[2]==1 || a2[4]==1 || a4[2]==1 || a4[4]==1)
    {
        cout<<"2";
    }
    if(a2[3]==1 || a3[2]==1 || a3[4]==1 || a4[3]==1)
    {
        cout<<"1";
    }
    if(a3[3]==1)
    {
        cout<<"0";
    } 
    return 0;
}
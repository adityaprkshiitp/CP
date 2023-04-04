#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    // cout<<"ENTER NUMBER\n";
    cin>>n;
    // DECALRING ARRAY
    string array[11] = {"BEER","ABSINTH","RUM","BRANDY","CHAMPAGNE","GIN","SAKE","TEQUILLA","VODKA","WHISKEY","WINE"};
    string num[18] = {"0","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17"};

    // DECLARING INPUT STRING AND CONDITIONS
    // cout<<"Enter the age or number\n";
    string a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n ; i++)
    {
        for (int j = 0; j < 11 ; j++)
        {
            if(a[i] == array[j] )
            {
                count++;
                // cout<<a[i];
            }
            else
            {
                continue;
            }
        }
        
    }
    for (int i = 0; i < n ; i++)
    {
        for (int j = 0; j < 18 ; j++)
        {
            if(a[i] == num[j])
            {
                count++;
                // cout<<a[i];
            }
            else
            {
                continue;
            }
        }
        
    }
    //int y = x + count;
    cout<<count;
    return 0;
    
}
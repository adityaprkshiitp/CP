#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	int n,s=0;
	char a[105];
	scanf("%d",&n);
	while(cin>>a)
	{
		s=strlen(a);
		if(s<=10)
		{
		    puts(a);
			printf("\n");
		}
		else
		{
			cout<<a[0];
			printf("%d",s-2);
			cout<<a[s-1];
			printf("\n");
		}
    }
    return 0;
}
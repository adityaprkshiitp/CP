#include<stdio.h>
int main()
{
 char s[100];
 int i,j,k,l,m;
 scanf("%s",s);
 for(i=0;s[i]!='\0';i++)
 {
  if(s[i]=='h')
  {
   for(j=i+1;s[j]!='\0';j++)
   {
    if(s[j]=='e')
    {
    for(k=j+1;s[k]!='\0';k++)
    {
     if(s[k]=='l')
     {
      for(l=k+1;s[l]!='\0';l++)
      {
       if(s[l]=='l')
       {
        for(m=l+1;s[m]!='\0';m++)
        {
        if(s[m]=='o')
         {
          printf("YES");
          return 0;
         }
        }
       }
      }
     }
    }
    }
   }
  }
 }
 printf("NO");
}
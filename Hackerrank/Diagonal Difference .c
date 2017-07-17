#include <stdio.h>
int main()
    {
       int n,j,i,sl=0,sr=0,s,ar[100][100];
    scanf("%d",&n);
       for(i=0;i<n;i++)
         {
           for(j=0;j<n;j++)
         {
               scanf("%d",&ar[i][j]);
         }
       }
         for(i=0;i<n;i++)
         {
             for(j=0;j<n;j++)
         {
                 if(i==j)
         {

                   sl=sl+ar[i][j];
         }
          if((i+j)==(n-1))
             {
             sr=sr+ar[i][j];}
         }}
  if(sr>sl)
      {s=sr-sl;}
    else s=sl-sr;
    printf("%d",s);


    }

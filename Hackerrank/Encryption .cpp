
      #include<ctype.h>
#include<stdio.h>
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{
    char str[82],ms[82];
    gets(str);
    int i,l,r,c,k,m,n;
    int  j=0;
    float q;
    j=0;
    for(i=0;i<strlen(str);i++)
    {
      if(str[i]!=' ')
      {
          ms[j++]=str[i];
      }
    }
     q=j;

    r=floor(sqrt(q));
    c=ceil(sqrt(q));
    k=0;

      if((r*c)<l)
          r+=1;
    for(i=0;i<c;i++)
        {
        for(k=i;k<q;k+=c)
            {
            cout<<ms[k];
        }
        cout<<' ';
    }

    return 0;
}

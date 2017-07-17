#include<iostream>
#include<ctype.h>
using namespace std;
int main()
{
    int n,k,m,temp,i;
    char s[100];
    cin>>n;
    cin>>s;
    cin>>k;
    k=k%26;
    for(i=0;i<n;i++)
    {
        if(isupper(s[i])!=0)
        {
           m='Z'-s[i];
           if(k<=m)
           s[i]=s[i]+k;
           else
           {
               temp=k-m;
               s[i]='A'+temp-1;
           }
        }
        else if(islower(s[i])!=0)
            {
           m='z'-s[i];
           if(k<=m)
           s[i]=s[i]+k;
           else
           {
               temp=k-m;
               s[i]='a'+temp-1;
           }
        }


    }
    for(i=0;i<n;i++)
    {
        cout<<s[i];
    }
    return 0;
}

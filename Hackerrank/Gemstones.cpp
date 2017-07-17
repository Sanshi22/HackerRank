#include<string.h>
#include<iostream>
using namespace std;
int main()
{
    int t,i,j=0,k,l;
    char str[100];
    int b[26]={0};
    cin>>t;
    int n=t;
    while(t!=0)
    {
        t--;
        cin>>str;
        
        l=strlen(str);
        for(i=0;i<l;i++)
            {
            for(k=i+1;k<l;k++)
                {
                if(str[i]==str[k])
                    {
                    str[k]='\0';
                }
            }
        }
        for(i=0;i<l;i++)
        {   if(str[i]!='\0')
            b[str[i]-97]++;
        }

    }
    for(i=0;i<26;i++)
    {
        if(b[i]>=n)
        {
            j++;
        }
    }
    cout<<j;
    return 0;
}
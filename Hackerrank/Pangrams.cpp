#include<string.h>
#include<iostream>
using namespace std;
int main()
{
    char str[1000];
    int l,i,j,flag=0;
    int b[26];
    for(i=0;i<26;i++)
    {
        b[i]=0;
    }
    cin.getline(str,1000);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        if(str[i]>=65&&str[i]<=90)
            {
               str[i]=str[i]+32;
            }
            if(str[i]!=' ')
            b[str[i]-97]++;
        }

    for(j=0;j<26;j++)
    {
        if(b[j]==0)
        {
         flag++;
         cout<<"not pangram";
         break;
        }

    }
    if(flag==0)
    {
        cout<<"pangram";
    }
    return 0;
}










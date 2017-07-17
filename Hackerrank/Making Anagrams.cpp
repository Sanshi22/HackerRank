#include<string.h>
#include<iostream>
using namespace std;
int main()
{
    char str1[10005],str2[10005];
    int b1[26]={0},b2[26]={0},i,j,l1,l2,flag=0,diff;
    cin>>str1;
    cin>>str2;
    l1=strlen(str1);
    l2=strlen(str2);
    for(i=0;i<l1;i++)
    {
        b1[str1[i]-97]++;
    }
    for(i=0;i<l2;i++)
    {
        b2[str2[i]-97]++;
    }
    for(i=0;i<26;i++)
    {
        if((b1[i]!=0)&&(b2[i]!=0))
        {
            if(b1[i]!=b2[i])
            {
               if(b1[i]>b2[i])
                    diff=b1[i]-b2[i];
               else
                    diff=b2[i]-b1[i];

                flag=flag+diff;
            }
        }
        else if((b1[i]==0)&&(b2[i]!=0))
            flag=flag+b2[i];
        else if((b1[i]!=0)&&(b2[i]==0))
             flag=flag+b1[i];
    }
    cout<<flag;
    return 0;
}

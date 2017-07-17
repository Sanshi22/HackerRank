#include<string.h>
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int t,i,l,flag,a,b;
    char str[10000];
    cin>>t;
    while(t!=0)
    {
        flag=0;
        t--;
        cin>>str;
        l=strlen(str);
        for(i=0;i<l/2;i++)
        {
            if(str[i]!=str[l-i-1])
            {
                if(str[i]>str[l-i-1])
                {    a=str[i];
                     b=str[l-i-1];
                    while(a!=b)
                    {
                        a--;
                        flag++;
                    }
                }
                else
                {
                    a=str[i];
                    b=str[l-i-1];
                    while(a!=b)
                    {
                       b--;
                       flag++;
                    }
                }
            }
        }
        cout<<flag<<"\n";
    }
    return 0;
}


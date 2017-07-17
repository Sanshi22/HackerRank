#include<string.h>
#include<iostream>
using namespace std;
int main()
{
    char str[100000];
    int i,l,b[26]={0},flag=0;
    cin>>str;
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        b[str[i]-97]++;
    }
    for(i=0;i<26;i++)
    {
        if(b[i]%2==1)
            flag++;
    }
    if(flag>1)
    {
        cout<<"NO";
    }
    else cout<<"YES";
    return 0;
}

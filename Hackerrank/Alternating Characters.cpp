#include<string.h>
#include<iostream>
using namespace std;
int main()
{
    int t,flag,l,i;
    char str[100000];
    cin>>t;
    while(t!=0)
    {
        flag=0;
        t--;
        cin>>str;
        l=strlen(str);
        for(i=0;i<l;i++)
        {
            if(str[i]==str[i+1])
            {
                flag++;
            }
        }
        cout<<flag<<"\n";
    }
    return 0;
}

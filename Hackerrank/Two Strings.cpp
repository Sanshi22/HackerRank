#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int t,l1,l2,i,j,flag;
    cin>>t;
    char s1[100005],s2[100005];
    int a1[26],a2[26];

    while(t!=0)
    {
        for(i=0;i<26;i++)
    {
        a1[i]=0;
        a2[i]=0;
    }
        flag=0;
        cin>>s1;
        cin>>s2;
        l1=strlen(s1);
        l2=strlen(s2);
        for(i=0;i<l1;i++)
        {
            a1[s1[i]-'a']++;
        }
        for(i=0;i<l2;i++)
        {
            a2[s2[i]-'a']++;
        }
        flag=0;
        for(i=0;i<26;i++)
        {


              if((a1[i]>0)&&(a2[i]>0))
             {
                  flag++;
                  break;
              }

        }
        if(flag!=0)
        {
            cout<<"YES"<<"\n";


        }
        else cout<<"NO"<<"\n";

        t--;
    }
    return 0;
}

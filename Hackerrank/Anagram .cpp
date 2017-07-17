#include<string.h>
#include<iostream>
using namespace std;
int main()
{
    int t,i,l,m,j,flag;
    char str[10005],ar[10005];
    cin>>t;
    while(t!=0)
    {
        t--;
        j=0;
        flag=0;
        cin>>str;
        l=strlen(str);
        m=l/2;
        if(l%2==0)
        {
          for(i=m;i<l;i++)
          {
              ar[j++]=str[i];
              str[i]='\0';
          }
          for(i=0;i<m;i++)
          {
              for(j=0;j<m;j++)
              {
                  if(str[i]==ar[j])
                  {
                      str[i]='\0';
                      ar[j]='\0';
                  }
              }
          }
          for(i=0;i<m;i++)
          {
              if(str[i]!='\0')
              {
                  flag++;
              }

         }

            cout<<flag<<"\n";
        }
                else  cout<<"-1\n";
    }
}





#include<math.h>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  char str[100005];
  int i,j,l,t,m,flag=0;
  cin>>t;
  while(t!=0)
  {
      flag=0;
      cin>>str;
      l=strlen(str);
      m=l/2;
      for(i=0,j=(l-1);i<m;i++,j--)
      {
        if(str[i]!=str[j])
        {
          if((str[i+1]==str[j])&&(str[i+2]==str[j-1]))
          j=i;
          flag++;
           break;
        }
      }
      if(flag!=0)cout<<j<<"\n";
      else cout<<"-1"<<"\n";
      t--;
  }
  return 0;
}


#include<string.h>
#include<iostream>
using namespace std;
int main()
{
    int t, z=1,i,n,flag,r,q;
    cin>>t;
    while(z<=t)

{
  cin>>n;
  flag=0;
  q=n;
  while(q!=0)
  {
      r=q%10;
      if(r==0)
      {
           q=q/10;
          continue;
      }
      if((n%r)==0)
      {
         flag++;

      }
       q=q/10;
  }

  cout<<flag<<"\n";
  z++;
}
return 0;
}



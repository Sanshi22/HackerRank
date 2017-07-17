
#include<iostream>
using namespace std;
int main()
{
    int ar[100],d,i,x,j,a,b;
    cin>>a>>b;
    x=a^b;
    for(i=a;i<=b;i++)
    {
      for(j=a;j<=b;j++)
      {
          d=i^j;
          if(d>x)
          x=d;

      }
    }
    cout<<x;
    return 0;
}




#include <iostream>
using namespace std;
int main()
{
   long long int  u ,lo,i,flag=0;
   cin>>lo>>u;
   for(i=lo;i<=u;i++)
    {
     long  long int num=i*i;
      long long  int q;
    q=i;
    int dig=0;
    while (q!=0)
    {
       dig++;
       q/=10;

    }
    int ar[100]={0},j=0;
    while (num!=0)
    {
        ar[j]=num%10;
        num=num/10;
        j++;
    }
    int r=0,l=0;
    if(j%2!=0)
    {
         for(int k=j-dig;k>=0;k--,r*=10)
         {
         r=r+ar[k];
         }
         for(int k=j-1;k>j-dig;k--,l*=10)
         {
        l=l+ar[k];
         }
    }
    else
    {
         for(int k=j-dig-1;k>=0;k--,r*=10)
          {
            r=r+ar[k];
           }

        for(int k=j-1;k>=j-dig;k--,l*=10)
            {
                l=l+ar[k];
            }

    }
    r/=10;
    l/=10;
if(i==(r+l))
{cout <<i<<" ";
flag++;
}
}
if(flag==0)
    cout<<"INVALID RANGE";
    return 0;
}

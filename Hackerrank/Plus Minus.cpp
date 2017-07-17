#include<iostream>
using namespace std;
int main()
    {int ar[100],n,i,flag1=0,flag2=0,flag3=0;
     float f1,f2,f3;
    cin>>n;
         for(i=0;i<n;i++)
    {cin>>ar[i];
    }
    for(i=0;i<n;i++)
    {if(ar[i]>0)
    {flag1++;
    }
    else if(ar[i]<0)
        {flag2++;
        }
    else if (ar[i]==0)
    {flag3++;
    }
    }
     f1=((float)flag1)/n;
     f2=((float)flag2)/n;
     f3=((float)flag3)/n;
     cout<<f1<<"\n"<<f2<<"\n"<<f3;
    }
    
     
     

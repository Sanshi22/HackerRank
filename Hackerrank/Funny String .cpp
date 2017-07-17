#include<stdio.h>
#include<cmath>
#include<string.h>
#include<iostream>
using namespace std;
int main()
{
    int t,i,j,l,flag=0,p,k,q,w,z,x;
    char s[10005],r[10005],c;
   cin>>t;
    cin.getline(&c,1);
    while(t!=0)
    {  flag=0;
       t--;
     
       cin.getline(s,10005);
     
       l=strlen(s);
        for(i=0;i<l;i++)
        {
          r[i]=s[l-i-1] ;
        }
     
       for(j=1;j<l;j++)
       {
           q=s[j];
           w=s[j-1];
           z=r[j];
           x=r[j-1];
           p=abs(q-w);
           k=abs(z-x);
           
           if(p!=k)
           {
            ++flag;
            break;
           }

       }
       if(flag==0)
       {
           cout<<"Funny\n";
       }
       else cout<<"Not Funny\n";
         }
         return 0;
}

#include<iostream>
using namespace std;
int main(void) {
    int t,i,j,c;
    cin>>t;
    int ar[10000];
    for(i=0;i<t;i++)
        cin>>ar[i];    
    for(i=1;i<t;i++)
        { for(j=0;j<i;j++)
        {if(ar[i]<ar[j])
            { c=ar[j];
             ar[j]=ar[i];
             ar[i]=c;          
            }
        }
         for(j=0;j<t;j++)
             cout<<ar[j]<<" ";
         cout<<"\n";
        }
   return 0;
}
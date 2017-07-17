
#include<iostream>
using namespace std;
int main()
{
    int t, z=1,rt[10],i;
    rt[10]={'0'};
    cin>>t;
    while(z<=t)
    {

        int n,k,ar[1000],flag=0;
        cin>>n>>k;
        for(int i=0;i<n;i++)
        {

            cin>>ar[i];
            if(ar[i]<=0)
            {
                flag++;
            }
        }
         if(flag>=k)
        {
          rt[z]++;
        }
       
          flag=0;
        z++;


    }  for(i=1;i<=t;i++)
        {
        if(rt[i]>0)
            {
            cout<<"NO\n";
            }
        else cout<<"YES\n";
         }

        return 0;

}


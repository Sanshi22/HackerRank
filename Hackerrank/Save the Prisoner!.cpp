#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

   int main()
    { long long m , n,c,t,s,i;

    cin>>t;
    for(i=0;i<t;i++)
        { cin>>n>>m>>s;

          if((m+s-1)<=n)
              cout<<m+s-1;
          else
          {
              c=n-s+1;
             m=m-c;
           if(m%n==1)
             { cout<<1<<"\n"; continue;}
           if(m%n==0)
               {cout<<n<<"\n";continue;}

         cout<<m%n<<"\n";
          }





        }

    return 0;
}

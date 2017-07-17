
#include<iostream>
using namespace std;
int main()
{
   int n;
   int ar[1001];
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>ar[i];
    int k;
    k=ar[n-1];
    for(int i=n-1;i>=0;i--)
      {
          if(ar[i]<k)
           {
               ar[i+1]=k;
               for(int j=0;j<n;j++)
                  {
                     cout<<ar[j]<<" ";


                   }
                break;

           }
       else if (ar[i]>=k)
       {
           ar[i]=ar[i-1];
           if(i-1>=0)
           if(ar[i-1]>k)
           {
               for(int j=0;j<n;j++)
              {
                  cout<<ar[j]<<" ";

               }
            cout<<"\n";
           }

           if(i-1<0)
            {
                ar[i]=k;
            for(int j=0;j<n;j++)
              {
                  cout<<ar[j]<<" ";

               }
            }
       }
      }

   return 0;
}

         
    
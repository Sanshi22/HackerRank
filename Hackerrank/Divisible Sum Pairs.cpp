#include<iostream>
using namespace std;
int main()
{
 int n, k,ar[100],flag=0;
    cin>>n>>k;
    for(int i=0;i<n;i++)
        {
        cin>>ar[i];
    }
  for(int i=0;i<n;i++)
      {
      for(int j=0;j<n;j++)
          {
          if(j<i)
              {
             if((ar[i]+ar[j]) %k==0)
                 flag++;
          }
      }
  }
    cout<<flag;
    
 return 0;   
}
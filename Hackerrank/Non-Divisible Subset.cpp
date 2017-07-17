#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {
    
    int k,n,i,j,arr[1000]={0},count=0,c,s=0;
    long long int ar[100000];
	cin>>n>>k;

    for(i=0;i<n;i++)
      {  cin>>ar[i];//cout<<ar[i];
         arr[ar[i]%k]+=1;
      }


       for(i=1;i<k/2+k%2;i++)
           {
           s+=max(arr[i],arr[k-i]);
       }
       s+=min(1,arr[0]);
        if(k%2==0)
            {
            s+=min(1,arr[k/2]);
        }
        
       cout<<s;




    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
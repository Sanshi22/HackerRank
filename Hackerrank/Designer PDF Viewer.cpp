#include<bits/stdc++.h>
using namespace std;
int mi=INT_MIN;
int main()
    {
   int V[26]={0};
    int k;
    string s;
    for(int i=0;i<26;i++)
        {
      cin>>V[i];    
    }
    cin>>s;
    for(int i=0;i<s.size();i++)
        {
        if(
            V[s[i]-97]>mi)
        {
            mi=V[s[i]-97];
        }
        //cout<<V[s[i]-97];
    }
    cout<<(s.size())*mi;
    return 0;
}
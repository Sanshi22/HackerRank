#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long t,l;
    string s;
    bool p;
    cin>>t;
    while(t!=0)
        {
        cin>>s;
        l=s.length();
        p=next_permutation(s.begin(),s.end());
        if(p==false)
            cout<<"no answer"<<endl;
        else cout<<s<<endl;
        t--;
    }
    return 0;
}

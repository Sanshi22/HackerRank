#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long n,k,a,ma=-1;
    cin>>n>>k;
    for(long long i=0;i<n;i++)
        {
        cin>>a;
        if(a>ma)
            ma=a;
    }
    if(ma>k)
        cout<<ma-k;
    else cout<<0;
    return 0;
}

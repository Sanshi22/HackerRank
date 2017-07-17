#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main()
{
    int n,flag=0;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
        {
        cin>>a[i];
    }
    for(int i=0;i<(n-1);)
       { if(a[i+2]==1)
       {
           flag++;
           i++;
       }
        else {
            flag+=1;
            i+=2;
        }
    }
    cout<<flag;
    
    return 0;
}

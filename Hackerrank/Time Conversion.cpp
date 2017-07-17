#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string time;
    cin >> time;
    if(time=="12:00:00AM")
        {
        time="00:00:00";
        cout<<time;
        return 0;
    }
    if(time=="12:00:00PM")
        {
         time="12:00:00";
        cout<<time;
        return 0;
    }
    if(time[8]=='P')
       { 
        if(time[0]=='1'&&time[1]=='2')
            {
             time[8]=' ';
        time[9]=' ';
        cout<<time;
        return 0;
        }
       else { time[1]+=2;
        time[0]+=1;
        time[8]=' ';
        time[9]=' ';
        cout<<time;
        return 0;
            }
       } 
    if(time[8]=='A')
        {
        if(time[0]=='1'&&time[1]=='2')
            {
            time[0]='0';
            time[1]='0';
            time[8]=' ';
        time[9]=' ';
            cout<<time;
            return 0;
        }
        else {
        time[8]=' ';
        time[9]=' ';
       
            cout<<time;}
        return 0;
    }
    
    
    
    return 0;
}

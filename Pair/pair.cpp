#include<bits/stdc++.h>
using namespace std;

int main(){
        pair<int,string> p;
//initialization for pair type-1
        p= make_pair(2,"abc");                 
        cout<<p.first<<" "<<p.second<<endl;
//initialization for pair type-2
        p= {2,"abc"};                          
        cout<<p.first<<" "<<p.second<<endl;
//taking input for pair
        cout<<"Take an intiger and a string for pair"<<endl;
        cin>>p.first>>p.second;
        cout<<p.first<<" "<<p.second<<endl;
        cout<<++(p.first)<<" "<<p.second;
    return 0;
}

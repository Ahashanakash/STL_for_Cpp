#include<bits/stdc++.h>
using namespace std;

int main (){

    //taking numbers by arry
    vector<int>v={1,2,3,4,5};

    //declaring iterator
    vector<int>:: iterator it;

    //accessing value
    it=v.begin()+3;

    //printing
    cout<<*(it);

    //printing all the value
    for ( it = v.begin(); it!=v.end(); it++)
    {
        cout<<(*it)<<" ";
    }

    //using auto keyword 
    for (auto it = v.begin(); it !=v.end() ; it++)
    {
        cout<<(*it)<<" ";
    }
    
return 0;
}
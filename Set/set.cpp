#include<bits/stdc++.h>
using namespace std;

int main (){
    //ascending order
    set<int>s;

    //discending order
    //set<int,greater<int>>s;

    //unordered set
    //unordered_set<int>s; //not sorted


    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(2);
    s.insert(5);

    for (auto it = s.begin(); it!=s.end(); it++)
    {
        cout<<(*it)<<" ";
    
    }
    cout<<endl;

    //cheak if the value exist there or not  //cheak if the value exist there or not
    if(s.count(66))cout<<"ase";
    else cout<<"nai";
return 0;
}
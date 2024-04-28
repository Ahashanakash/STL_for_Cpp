#include<bits/stdc++.h>
using namespace std;

int main (){
    map<string,int>mp;
    //insert type 1
    // mp.insert({"shakib",75});
    // mp.insert({"tamim",100});
    // mp.insert({"mahmudullah",33});
    // for (auto it = mp.begin(); it !=mp.end(); it++)
    // {
    //     cout<<it->first<<" "<<it->second<<endl;
    // }

    //insert type 2
    mp["shakib"]=75;
    mp["tamim"]=100;
    mp["mahmudullah"]=33;
    for (auto it = mp.begin(); it !=mp.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }

    //cheak if the value exist there or not      //cheak if the value exist there or not
    if(mp.count("fraud"))cout<<"ase";
    else cout<<"nai";
    
return 0;
}
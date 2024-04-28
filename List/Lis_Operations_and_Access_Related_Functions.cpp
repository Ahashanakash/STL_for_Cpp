#include<bits/stdc++.h>
using namespace std;

int main (){
    list<int> mylist={1,8,1,5,1,6,7,8,7,3,1,2,1,9,10};

    //remove same values (list main)
    mylist.remove(1);

    //sort ascending order
    mylist.sort();
    for (auto it : mylist)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    
    //sort ascending order
    mylist.sort(greater<int>());
    for (auto it : mylist)
    {
        cout<<it<<" ";
    }
    cout<<endl;

    //unique values (should use sort first)
    mylist.unique();
    for (auto it : mylist)
    {
        cout<<it<<" ";
    }
    cout<<endl;

    //reverse linkedlist
    mylist.reverse();
    for (auto it : mylist)
    {
        cout<<it<<" ";
    }
    cout<<endl;

    //access any index
    cout<<*next(mylist.begin(),3)<<endl;

return 0;
}
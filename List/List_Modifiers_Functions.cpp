#include<bits/stdc++.h>
using namespace std;

int main (){
    list<int> mylist={1,2,3,4,5};
    list<int> my;

    //copy list
    my=mylist;

//     //insert tail
//     mylist.push_back(55);

//     //delete tail
//     mylist.pop_back();

//     //insert head
//     mylist.push_front(99);

//     //delete head
//     mylist.pop_front();

//     //insert at any index
//     my.insert(next(my.begin(),3),78787);

//     //resize (increase or decrease size)
//     mylist.resize(9);

    //delete any index
    my.erase(next(my.begin(),0));

//     //replace all same values
//     replace(mylist.begin(),mylist.end(),0,33);

//     //find function
//     auto it = find(mylist.begin(),mylist.end(),33);
//     if (it==mylist.end())
//     {
//         cout<<"Not found"<<endl;
//     }
//     else cout<<"Found"<<endl;

    for (auto it : my)
    {
        cout<<it<<" ";
    }
//     cout<<endl;
//     mylist.resize(9);
//     for (auto it : mylist)
//     {
//         cout<<it<<" ";
//     }

return 0;
}
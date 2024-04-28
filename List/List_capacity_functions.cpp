#include<bits/stdc++.h>
using namespace std;

int main (){
    list<int> mylist={1,2,3,4,5};

    //size
    cout<<mylist.size()<<endl;

    //max_size
    cout<<mylist.max_size()<<endl;

    //clear
    mylist.clear();
    for (auto it : mylist)
    {
        cout<<it<<" ";
    }

    //empty
    bool emp = mylist.empty();
    cout<<emp<<endl;

    //resize
    mylist.resize(9);
    for (auto it : mylist)
    {
        cout<<it<<" ";
    }

return 0;
}
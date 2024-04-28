#include<bits/stdc++.h>
using namespace std;

int main (){
    //initialization 1
    list<int> mylist;

    //initialization 2
    list<int> mylist={11,22,33,44,55};

    //initialization copying another list
    list<int> mylist1(mylist);

    //initialization with size
    list<int> mylist(10);

    //initialization with size and same values
    list<int> mylist(10,5);

    //initialization fisrt element
    cout<<mylist.front();

    //initialization copying array
    int arr[5]={1,2,3,4,5};
    list<int> mylist(arr,arr+5);
    
    //printing using pointer
    for (auto it = mylist.begin(); it != mylist.end(); it++)
    {
        cout<< *it <<endl;
    }

    //printing for only value
    for (auto it : mylist)
    {
        cout<<it<<" ";
    }
    
    
return 0;
}
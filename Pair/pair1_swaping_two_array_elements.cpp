#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[3]={1,2,3};
    int b[3]={4,5,6};
    cout<<"Before swaping array"<<endl;
    cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
    cout<<b[0]<<" "<<b[1]<<" "<<b[2]<<endl;
    cout<<endl;
    pair<int,int> p_arrray[3];
    p_arrray[0]={1,4};
    p_arrray[1]={2,5};
    p_arrray[2]={3,6};
    swap(p_arrray[0],p_arrray[2]);
    cout<<"After swaping array"<<endl;
    for (size_t i = 0; i < 3; i++)
    {
        cout<<p_arrray[i].first<<" ";
    }
    cout<<endl;
    for (size_t i = 0; i < 3; i++)
    {
        cout<<p_arrray[i].second<<" ";
    }
    return 0;
}

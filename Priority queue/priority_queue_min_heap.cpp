#include<bits/stdc++.h>
using namespace std;

int main (){
    priority_queue<int,vector<int>,less<int>>pq;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        pq.push(x);
    }
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    
    
return 0;
}
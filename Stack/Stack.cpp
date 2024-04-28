#include<bits/stdc++.h>
using namespace std;

int main (){
    stack<int> st;

    //input
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    while (!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    

    //empty
    if(st.empty()) cout<<"Empty"<<endl;
    else cout<<"Not empty"<<endl;

    //top
    if(st.empty()==false) cout<<st.top()<<endl;

    //push
    st.push(9);

    //pop
    if(!st.empty()) st.pop();

    //size
    cout<<st.size()<<endl;

    
    
return 0;
}
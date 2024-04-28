#include<bits/stdc++.h>
using namespace std;

class student{
    public:
        string name;
        int roll;
        int marks;
        student(string name,int roll,int marks){
            this->name=name;
            this->roll=roll;
            this->marks=marks;
    }
};

class cmp{
    public:
    bool operator()(student a,student b){
        if(a.marks==b.marks)return a.roll>b.roll;
        return a.marks<b.marks;
    }
};

int main (){
    int t;
    cin>>t;
    priority_queue<student,vector<student>,cmp>pq;
    while (t--)
    {
        string s;
        int roll,marks;
        cin>>s>>roll>>marks;
        student obj(s,roll,marks);
        pq.push(obj);
    }
    int q;
    cin>>q;
    while (q--)
    {
        int n;
        cin>>n;
        if(n==0)
        {
        string s;
        int roll,marks;
        cin>>s>>roll>>marks;
        student obj(s,roll,marks);
        pq.push(obj);
        cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
        }
        else if (n==1)
        {
            if(!pq.empty())cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
            else cout<<"Empty"<<endl;
        }
        else if (n==2)
        {
            if(pq.empty())cout<<"Empty"<<endl;
            else
            {
                pq.pop();
                if(!pq.empty())cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
                else cout<<"Empty"<<endl;
            }
            
            
        }
        
    }
    
    
return 0;
}
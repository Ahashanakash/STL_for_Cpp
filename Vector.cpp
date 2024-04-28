#include<bits/stdc++.h>
using namespace std;

//print function
void print (vector<int> &v){
    cout<<"elements = "<<v.size()<<endl;
    for (int data:v)
    {
        cout<<data<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    vector<int> v;      
    cout<<"Enter size"<<endl;
    cin>>n;

    cout<<"Enter elements"<<endl;
// taking input for vector  
    for (size_t i = 0; i < n; i++)
    {
        int x;                 // use push_back to take input for vector. or it will show error.
        cin>>x;          
        v.push_back(x);
    }
//showing taken input
    cout<<"Vector v = "<<endl;
    print(v);

// adding elements in vector using push_back()
    cout<<"After using push_back"<<endl;
    v.push_back(9);       
    print(v);

// removing last element from vector using pop_back()
    cout<<"After using pop_back"<<endl;
    v.pop_back();            
    print(v);

//After inserting elements in between other elements
    cout<<"After inserting elements in between other elements "<<endl;
    v.insert(v.begin(),8);         
    v.insert(v.begin()+3,9);
    print(v);

//copying vector to another vector
    cout<<"Copying vector to another vector"<<endl;
    vector<int> &v2 = v;         // using & for don't copying elements because of time complexity.
    print(v2);                     // v2 take elements by reference which is kind of copying

//removing an elements from vector
    cout<<"removing an element from vector"<<endl;
    v.erase(v.begin()+2);
    print(v);

//removing some elements from vector
    cout<<"removing some elements from vector"<<endl;
    v.erase(v.begin()+2,v.end()-1);       //it will remove a range from nth to nth elements of an arrray
    print(v);

// removing all elements of the vector
    cout<<"removing all elements from the vector"<<endl;
    v.clear();
    print(v);

    return 0;
}
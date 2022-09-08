#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    unordered_set<int>s;
    s.insert(10);
    s.insert(1);
    s.insert(20);
    s.insert(20);
    s.insert(15); // duplicate elements not allowed in set
    s.insert(15);

    for(auto it=s.begin();it!=s.end() ; it++){
        cout<<(*it)<<" ";
    }
    cout<<endl;

    

    int key=20;
    if(s.find(key)==s.end())
    cout<<"key not found"<<endl;
    else
    {
        cout<<"key found"<<endl;
        auto temp=s.find(key);
        s.erase(temp);
    }
    

    // if(s.find(key)==s.end())
    // cout<<"key not found"<<endl;
    // else
    // cout<<"key  found"<<endl;

    int delete_key=1;
    s.erase(delete_key);
    cout<<"deleted the item"<<endl;

    for(auto it=s.begin();it!=s.end() ; it++){
        cout<<(*it)<<" ";
    }

    cout<<endl<<"number of elements present: " <<s.size()<<endl;
    // s.clear();
    // cout<<endl<<"number of elements present: " <<s.size();
    
    if(s.count(10)) // substitute of find ... returns 1 or 0 for true or false
    cout<<"key found"<<endl;
   return 0;
}
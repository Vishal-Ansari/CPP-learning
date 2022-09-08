#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string,int> umap;
    int n;
    cin>>n;
    string votes[n];
    for(int i=0;i<n;i++)
    cin>>votes[i];

    for(int i=0;i<n;i++)
    umap[votes[i]]++;

    string name="";
    int max=0;
    for(auto it=umap.begin();it!=umap.end();it++){
        string key=it->first;
        int value=it->second;
        if(value>max){
            max=value;
            name=key;
        }
        else if(value==max){
            if(name>key)
            name=key;
        }

    }
    cout<<name<<"  " <<max<<endl;
    
   return 0;
}
#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<int,int> umap;
    int n;
cout<<"enter size of the array: ";
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
int x;
cout<<"enter the element: ";
cin>>x;

for(int i=0;i<n;i++){
    umap[arr[i]]++;
}

for(auto it=umap.begin();it!=umap.end();it++){
    int key=it->first;
    int value=it->second;
    int pair=x-key;
    if( (pair==key) && value>1)
    cout<<"yes"<<endl;
    else{
        if(umap.find(pair)!=umap.end())
        cout<<"yes"<<endl;
    }
}

}

//------------------       unordered set will give th epair of repeated elements so we use mapping------------------------

// #include<iostream>
// #include<unordered_set>
// using namespace std;

// int main(){
//     unordered_set<int> uset;
//     int n;
// cout<<"enter size of the array: ";
// cin>>n;
// int arr[n];
// for(int i=0;i<n;i++)
// cin>>arr[i];
// int x;
// cout<<"enter the element: ";
// cin>>x;

// for(int i=0;i<n;i++)
// uset.insert(arr[i]);

// for(int i=0;i<n;i++)
// {
//     if(uset.find(x-arr[i])!=uset.end())
//     cout<<"pair is "<<arr[i]<<" ,"<<*(uset.find(x-arr[i]));
// }
//    return 0;
// }
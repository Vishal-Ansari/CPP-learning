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

for(int i=0;i<n;i++){
    umap[arr[i]]++;
}

for(int i=0;i<n;i++){
    int key=arr[i];
    auto temp=umap.find(key);
    if(temp->second>1)
    cout<<key<<" ";
    break;
}
   return 0;
}
#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    unordered_set<int> uset;
    int n;
cout<<"enter size of the array: ";
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];

    int m;
cout<<"enter size of the array: ";
cin>>m;
int arr1[m];
for(int i=0;i<m;i++)
cin>>arr1[i];



for(int i=0;i<n;i++){
    uset.insert(arr[i]);
}

for(int i=0;i<m;i++)
{
    if(uset.find(arr1[i])!=uset.end()){
        auto temp=uset.find(arr1[i]);
        cout<<*temp<<" ";
        uset.erase(temp);
    }
}


   return 0;
}
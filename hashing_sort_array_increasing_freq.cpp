#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<int,int> umap;
    int n;
    cout << "enter size of the array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        umap[arr[i]]++;
    }
vector<int> ans;
    for(auto it=umap.begin();it!=umap.end();it++){
       int  key=it->first;
        int value=it->second;

    }

   return 0;
}
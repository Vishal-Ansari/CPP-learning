#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int,int>m;
    int n;
    cout << "enter size of the array 1: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        m[arr[i]]++;
    }
    int x;
    cout << "enter size of the array 2: ";
    cin >> x;
    int arr[x];
    for (int i = 0; i < x; i++){
        cin >> arr[i];
    }

    for(int i=0;i<x;i++){
        int key=arr[i];
        if(m.find(x)!=m.end()){
            cout<<
        }
    }


   return 0;
}
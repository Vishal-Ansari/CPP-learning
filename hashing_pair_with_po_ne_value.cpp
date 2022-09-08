#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    unordered_set<int> uset;

    int n;
    cout << "enter size of the array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        uset.insert(arr[i]);
    }

    for(int i=0;i<n;i++){
        if(uset.find((-1)*arr[i])!=uset.end() ){
            cout<<arr[i]<<" "<<(-1)*arr[i]<<endl;
            uset.erase(arr[i]);
            // uset.erase((-1)*arr[i]);
        }
    }

   return 0;
}
#include <iostream>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_set<int> uset;

    int n;
    cout << "enter size of the array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int pre_sum = 0;
    for (int i = 0; i < n; i++)
    {
        pre_sum += arr[i];
        if(pre_sum==0)
        cout<<"yes";
        if(uset.find(pre_sum)!=uset.end())
        cout<<"yes";

        uset.insert(pre_sum);
    }

    //------------brute force ---------------------

    // for(int i=0;i<n;i++){
    //     int curr=0;
    //     for(int j=0;j<n;j++){
    //         curr+=arr[j];
    //         if(curr==0)
    //         cout<<"found the subarray";
    //     }
    // }

    return 0;
}
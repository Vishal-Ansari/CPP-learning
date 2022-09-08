#include <bits/stdc++.h>
using namespace std;

int first(vector<int> &nums, int target, int low, int high){
        int start=-1;
        while(low<high){
            int mid=(high-low)/2;
            if(target==nums[mid]){
                start=mid;
                high=mid-1;
            }
            else if(target<nums[mid]) high=mid-1;
            else low=mid+1;
        }
        
        return start ;
        
    }
    int last(vector<int> &nums, int target, int low, int high){
        int end=-1;
         while(low<high){
            int mid=(high-low)/2;
            if(target==nums[mid]){
                end=mid;
                low=mid+1;
            }
            else if(target<nums[mid]) high=mid-1;
            else low=mid+1;
        }
        
    
        return end;
        
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
       int f=first(nums,target,0,n-1);
        int l=last(nums,target,0,n-1);
        vector<int>ans;
        ans.push_back(f);
        ans.push_back(l);
        return ans;
    }

int main() {
  
  vector<int>num;
  num.push_back(5);
  num.push_back(7);
  num.push_back(7);
  num.push_back(8);
  num.push_back(8);
  num.push_back(10);
  int n=num.size();
  cout<<n<<endl;
  for(int i=0;i<n;i++)
  cout<<num[i]<<" ";
  cout<<endl;
  
  searchRange(num,8);

  
}
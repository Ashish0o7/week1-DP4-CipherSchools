class Solution {
public:
    int first_occr(vector<int>& arr, int n, int k) {
        int l=0,h=n-1;
        int res=-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(arr[mid]==k){
                res=mid;
                h=mid-1;
            } 
            else if(arr[mid]<k){
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        return res;
    }
    int last_occr(vector<int>& arr, int n, int k) {
        int l=0,h=n-1;
        int res=-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(arr[mid]==k){
                res=mid;
                l=mid+1;
            } 
            else if(arr[mid]<k){
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        return res;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=first_occr(nums,nums.size(),target);
        int last=last_occr(nums,nums.size(),target);
        return {first,last};
    }
};
class Solution {
public:
int find(vector<int>& nums, int k){
    int low=0;
    int high=nums.size()-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid]==k) return mid;
        if(nums[low] == nums[mid] && nums[mid]==nums[high]){
            low++;
            high--;
            continue;
        }

        // left sorted
        if(nums[low]<=nums[mid]){
           if(nums[low]<=k && k<=nums[mid]){
               high=mid-1;
           }
           else{
               low=mid+1;
           }
        }

        // right sorted
        else{
            if(nums[mid]<=k && k<=nums[high]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }

    }
    return -1;

}
    bool search(vector<int>& nums, int x) {
        bool ans;
        return ans = (find(nums,x)) != -1 ? true:false;
        
    }
};

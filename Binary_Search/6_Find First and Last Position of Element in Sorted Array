class Solution {
public:

int first(vector<int>& nums, int x) {
    int f=-1;
    int low=0;
    int high=nums.size()-1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(nums[mid]==x){
           f=mid;
           high=mid-1;
        }
        else if(nums[mid]<x){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return f;
}
int second(vector<int>& nums, int x) {
    int l=-1;
    int low=0;
    int high=nums.size()-1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(nums[mid]==x){
           l=mid;
           low=mid+1;
        }
        else if(nums[mid]<x){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return l;
 }


vector<int> searchRange(vector<int>& nums, int x) {
vector<int> sol;
sol.push_back(first(nums, x));
sol.push_back(second(nums, x));
return sol;
 
}
};

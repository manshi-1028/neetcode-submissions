class Solution {
public:
    int pivot(vector<int>& nums){
    int start = 0;
    int end = nums.size() - 1;

    while(start < end){
        int mid = start + (end - start) / 2;

        if(nums[mid] >= nums[0])
            start = mid + 1;
        else
            end = mid;
    }

    return start;
}
    int search(vector<int>& nums, int target) {
        int piv=pivot(nums);
        int start;
        int end;
        int mid;
        if(target >= nums[piv] && target <= nums[nums.size()-1]){
            start=piv;
            end=nums.size()-1;
            mid=start+(end-start)/2;
        }
        else{
            start=0;
            end=piv-1;
            mid=start+(end-start)/2;
        }
        while(start<=end){
                if(nums[mid]==target){
                    return mid;
                }
                else if(nums[mid]<target){
                    start=mid+1;
                }
                else{
                    end=mid-1;
                }
                mid=start+(end-start)/2; 
            }
             
            return -1;          
        }
        
  
};
class Solution {
   public int search(int[] nums, int target) {
        int minimum = searchMinimum(nums);
        if(nums[minimum] <= target && target <= nums[nums.length-1]){
             return binarySearch(nums,minimum,nums.length-1,target);
        }
        else{
            return binarySearch(nums,0,minimum,target);
        }
    }
    
    
    public int binarySearch(int[] nums,int start,int end,int target){
        int lo = start;
        int high = end;
        while(lo <= high){
            int mid = lo + (high - lo)/2;
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] > target){
                high = mid-1;
            }
            else{
                lo = mid+1;
            }
        }
        return -1;
    }
    public int searchMinimum(int[] nums){
        int start = 0;
        int end = nums.length-1;
        while(start < end){
            int mid = start + (end - start)/2;
            if(mid > 0 && nums[mid-1] > nums[mid]){
                return mid;
            }
            else if(nums[start] <= nums[mid] && nums[mid] > nums[end]){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        
        return start;
    }
    
}

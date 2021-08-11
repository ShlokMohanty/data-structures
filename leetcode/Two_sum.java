import java.util.HashMap;
class Solution {
    public int[] twoSum(int[] nums, int target) {
        int [] ans = new int[2];
        if(nums.length==0)
        {
            return ans;
        }
        HashMap<Integer, Integer> hmap = new HashMap();
        for(int i=0;i<nums.length;i++)
        {
            int diff = target-nums[i];
                if (hmap.containsKey(diff))
                {
                    ans[0]=i;
                    ans[1]=hmap.get(diff);
                    return ans;
                    
                }
            else
            {
                hmap.put(nums[i], i);
            }
        }
        return ans;
    }
}

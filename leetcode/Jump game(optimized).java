class Solution {
    public boolean canJump(int[] nums) {
        int n = nums.length;
        int lastIndex = n-1;
        for(int i = n-2; i >= 0; i--) {
            if(i+nums[i] >= lastIndex) {
                lastIndex = i;
            }
        }
        return lastIndex == 0;
    }
}

/* arr---> nums 
our pisition --> nums[1]
each element in the arr represents our maximum jump length at that position .
true if last index is reached 
false if not(otherwise).

example :
nums=[2,3,1,1,4]
output: true 
explanation : jump1 step from index 0 to 1 ,then 3 steps to the last index .

0---> 2 : 2 step, 1---> 2: 1 , 2---> 3: 1, 3--->4: 1
number of steps taken ==4

nums=[3,2,1,0,4]
output: false 
explanation : 

0-->3 : 3 steps ,3-->3 :0 steps 
*/

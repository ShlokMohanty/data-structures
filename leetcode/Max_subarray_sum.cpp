#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int maxSubArray(vector<int>& nums)
    {
        vector<int> dp(n,0);
        for(int i=n-2;i>=0;i--)
        {
            dp[i] = nums[i] + max(dp[i+1],0);
            //dp[i] = max(nums[i] + dp[i+1], 0)
            
        }
        int ans = INT_MIN;
        for(int i=0;i<n;i++)
        {
            ans = max(ans,dp[i]);
        }
        return ans;
    }
}

/*subarray --> [L,R]
we are interested is the max subarray sum that strts form i .
suppose the max sub array starts from the index i+1 lets suppose 100.
max sub array sum starting from 100 is nothing but i+100
i+100 , 0.
[-2,1,-3,4,-1,2,1,-5,4]
after sorting :
[-5,-3,-2,-1,0,1,2,4,4]
but remember one thing we can do sorting as the qestion is just said to find the max 
subarray sum which is contiguous that means if we do any sorting operations then 
the understancding of the questions becomes wrong .
hence sorting will be canceled out .
if all the numbers are -ve then the answer should be for the array -3,-2,-1,10 be -1
as the max of all these array elements  is -1 in this dp what happens is 
then we have to apply or use conditional loops .

dp[i] = max subarray sum starting from index i.
dp[i] = max(nums[i]+dp[i+1], 0)*/

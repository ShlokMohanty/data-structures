class Solution {
    public int fib(int n) {
       int[] F = new int[100];
        F[0]=0;
        F[1]=1;
        for(int i=2;i<=n;i++)
        {
            F[i]=F[i-1]+F[i-2];
        }
        return F[n];
        
    }
}
/*reducing the time complexity to o(n) as when using recursion we were solving it in o(2^n).*/

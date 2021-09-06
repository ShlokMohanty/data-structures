#include<bits/stdc++.h>
using namespace std;
int countingsubsequence(int idx ,int sum,int arr[], int n)
{
    if(idx == n)
    {
        int k;
        cin>>k;
        if(sum%k==0)
        {
            return 1;
        }
        return 0;
    }
int left = countingsubsequence(idx+1,sum+arr[idx],arr,n);
int right = countingsubsequence(idx+1,sum,arr,n);
return left+right;
}
int main()
{
    int n;
    int idx;
    int sum;
    int arr[100];
    countingsubsequence(idx,sum,arr,n);
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[100];
        
       for(int i=0;i<n;i++)
       cin>>arr[i];
        sort(arr,arr+n,greater<int>());
        int target=arr[k-1];
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>=target)
            {
                count++;
            }
            else
            {
                break;
            }
        }
        cout<<count<< endl;
    }
}

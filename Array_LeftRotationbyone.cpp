#include<bits/stdc++.h>
using namespace std;
int LeftRotateone(int arr[],int n)
{
  int temp = arr[0];
  for(int i=0;i<n;i++)
  {
    arr[i-1] = arr[i];
  }
   arr[n-1] = temp;
}
int main()
{
  int N;
  cin>>N;
  int arr[100];
  for(int i=0;i<N;i++)
  {
    cin>>arr[i];
  }
  LeftRotateone(arr,N);
  for(int i=0;i<N;i++)
  {
    cout<<arr[i];
  }
}
  

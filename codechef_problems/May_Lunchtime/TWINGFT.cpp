#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,N,K;
    cin>>T>>N>>K;
    int Chef,Twin;
    int A[N];
    for(int t=0;t<T;t++)
    {
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
            if(K==1)
            {
            if(A[i]>A[i+1])
            {
                Chef = A[i];
            }
            Twin = A[i-1]+A[i+1];
            }
            else if (K==2)
            {
                if() 
            }
        }
        cout<<Chef<<endl;
    }
    
}

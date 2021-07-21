#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A,B,C,D;
    int T;
    cin>>T;
    for(int t=0;t<T;t++)
    {
        cin>>A>>B>>C>>D;
        if (A+C==180 && B+D==180)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}

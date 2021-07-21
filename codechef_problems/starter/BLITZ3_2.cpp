#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    int N,A,B;
    cin>>T;
    for(int t=0;t<T;t++)
    {
        cin>>N>>A>>B;
        int time_taken,time_left,duration_of_game;
        time_taken = 2*(180+N);
        time_left = A+B;
        duration_of_game = time_taken - time_left;
        cout<<duration_of_game<<endl;
    }
}

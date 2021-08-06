#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    for(int t=0;t<T;t++)
    {
        int G1,S1,B1,G2,S2,B2;
        int Team1=0,Team2=0;
        cin>>G1>>S1>>B1>>G2>>S2>>B2;
        Team1+=G1+S1+B1;
        Team2+=G2+S2+B2;
        if(Team2>Team1)
        {
            cout<<"2"<<endl;
        }
        else if(Team1>Team2)
        {
            cout<<"1"<<endl;
        }

    }
	// your code goes here
	return 0;
}

#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    int opt_1,opt_2;
    int x,y,d,z;
    for(int t=0;t<T;t++)
    {
        cin>>d>>x>>y>>z;
        opt_1 = 7*x;
        opt_2 = (6*z)+y;
        cout<<max(opt_1,opt_2)<<endl;
    }
	// your code goes here
	return 0;
}

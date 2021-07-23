#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    for(int t=0;t<T;t++)
    {
        int X,A,B;
        cin>>X>>A>>B;
        int solubility = (A + ((100 - X)*B))*10;
        cout<<solubility<<endl;
        
    }
	// your code goes here
	return 0;
}

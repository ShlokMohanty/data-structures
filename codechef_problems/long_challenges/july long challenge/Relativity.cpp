#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    int g,c;
    int min_height;
    for(int t=0;t<T;t++)
    {
        cin>>g>>c;
        min_height = (c*c)/(2*g);
        cout<<min_height<<endl;
    }
	// your code goes here
	return 0;
}

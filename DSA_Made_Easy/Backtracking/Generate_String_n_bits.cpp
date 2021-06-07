#include<bits/stdc++.h>
using namespace std;
 void generating_n_bits(int n)
{
	if(n<1)
	{
		cout<<bits;
	}
	 else
	 {
		 bits[i]=0;
		 generating_n_bits(n-1);
		 bits[i]=1;
		 generating_n_bits(n-1);
	 }
}
int main()
{
	int n;
	cin>>n;
  char bits[100];
	generating_n_bits(n);
	
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int R;
    cin>>R;
    while(R--){
    int L;
    cin>>L;
    string s;
    cin>>s;
    string str;
    
    for(int i=0;i<L;i++)
    {
        if(s[i]!='.')
        {
            str+=s[i];
        }
    }
    bool ans=true;
    if(str.length() % 2 != 0) return false;
    else 
    {
        for(int i=0;i<str.length();i++)
        {
            if(i%2==0){
            if(str[i]=='T') ans=false;
            }
            else
            {
                if(str[i]=='H') ans=false;
            }
            
        }
    }
    if(ans) cout<<"Valid"<< endl;
    else cout<<"Invalid"<< endl;
    
    }
}

#include<bits/stdc++.h>
using namespace std;
bool Palindrome_check(string s,int left, int right)
{
    if(left >= right )
    {
        return true;
    }
    if(s[left]==s[right])
    {
        return Palindrome_check(s,left+1,right-1);
    }
    return false;
}
int main()
{
    
    string s;
    int left;
    int right;
    

    Palindrome_check(s,left,right);
}

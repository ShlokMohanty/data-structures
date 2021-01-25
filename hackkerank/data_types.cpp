#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int num1;
    double decimal;
    string str;
    cin>>num1;
    cin>>decimal;
    cin>>str;
    getline(cin,str);
    // Read and save an integer, double, and String to your variables.
    
    // Print the sum of both integer variables on a new line.
    cout<<i+num1<<endl;
    
    
    // Print the sum of the double variables on a new line.
    cout<<fixed<<d+decimal<<endl;
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
     cout<<s+str<<endl;

    return 0;

#include<iostream>
using namespace std;
int main()
{
    int n=32;
    // check notes for clarification
    if((n&(n-1))==0) cout<<"Yes Power of 2"<<endl;
    else cout<<"Not a Power of 2"<<endl;

    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    // int n=14; // binary repr 1110
    // int cnt=0;
    // Time complexity is O(Position of MSB) or digit in binary reps
    // while(n!=0)
    // {
    //     if(n&1==1){
    //         cnt++;
    //     }
    //     n=n>>1;
    // }
    // cout<<cnt<<endl;

// O(set BIts)
    int n=5;
    int cnt=0;
    while(n!=0){
        n=(n&(n-1));
        cnt++;
    }
    cout<<cnt<<endl;

    

    return 0;
}
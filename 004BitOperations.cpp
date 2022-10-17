#include<iostream>
using namespace std;
int main()
{
    int n=5,i=2;
    // Check if the ith bit is set(1) or not(0)
    int mask=(1<<i); // I do left shift I times
    int ans=(mask&n); // take mask with n if ans is non zero the set bit otherwise not set bit
    if(ans>0)cout<<"Bit is Set Bit"<<endl;
    else cout<<"Bit is not Set Bit"<<endl;

    // find the kth bit 

    int m=5,k=2;
    // cout << ((m & (1 << (k))) >> (k));
    int makemask=(1<<k);
    int result=(makemask&m);
    result=(result>>k);
    cout<<result<<endl;

    // How to set the ith bit
    // function to set the ith bit
    int setKthBit(int n, int i)
    {
        // ith bit of n is being set by this operation
        return ((1 << i) | n);
    }

    // for clearing the ith bit means make the ith bit is 0
   cout<< n = n & ~(1 << k)

   // for clearing the last set bit
   cout<<(n&(n-1))<<endl;

    

    return 0;
}
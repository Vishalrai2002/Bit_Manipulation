#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    // Print the single one occurence using xor operator
    vector<int>v={1,1,3,4,4,3,2};
    int ans=0;
    for(int i=0;i<v.size();i++){
        ans=ans^v[i];
    }
    // cout<<ans<<endl;
    
    // Swapping of two number using xor operator
    int a=5,b=7;
    cout<<"a: "<<a<<" b: "<<b<<endl;
    // You only have to perform three Steps to get the swap done
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"a: "<<a<<" b: "<<b<<endl;
    


    return 0;
}
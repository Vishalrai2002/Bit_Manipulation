#include<iostream>
using namespace std;
int main()
{
    int n=5;
    

    // Below Approach Time Complexity is -> O(N)
    int ans=0;
    for(int i=1;i<=n;i++){
        ans=ans^i;
    }
    cout<<ans<<endl;

    // Below Approach Time Complexiity is -> O(1)

    if(n%4==0) cout<<n<<endl;    
    if(n%4==1) cout<<1<<endl;    
    if(n%4==2) cout<<n+1<<endl;    
    if(n%4==3) cout<<0<<endl;    


    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

void printSubsets(int *arr,int n){

/*Total Subsets are 2^n -> we write this as (1<<n) and idx start from 0 so do -1 in loop*/

    for(int nums=0;nums<=(1<<n)-1;nums++){
        for(int bits=0;bits<n;bits++){
            if(nums&(1<<bits)){ // if bits is set the print that arr value with bit idx
                cout<<arr[bits]<<" ";
            }
        }
        cout<<endl;
    }
}

int main()
{
    int n=3;
    int arr[]={1,2,3};
    printSubsets(arr,n);

    return 0;
}
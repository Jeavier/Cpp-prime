// Program to sum and product an array 

#include<iostream>
using namespace std;

int main(){
    int arr[8]={2,4,6,7,8,9,3,1};
    
    // int sum=0;
    // for(int i=0;i<8;i++){
    //     sum = sum+arr[i];
    // }
    // cout << sum<<endl;

    int prod=1;
    for(int i=0;i<8;i++){
        prod = prod*arr[i];
    }
    cout << prod<<endl;
    return 0;
}
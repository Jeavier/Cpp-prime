#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int ans=0;
    int pow=1;

    while(n>0){
        int paritydigit = n%2;
        ans += (paritydigit*pow);
        pow*=10;
        n/=2;

    }
    cout<<ans<<endl;

    return 0;
}
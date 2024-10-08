#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int ans=0;
    int pow=1;

    while(n>0){
        int lastdigit = n%10;
        ans += (lastdigit*pow);
        pow *= 2;
        n/=10;
    }
    cout<<ans<<endl;
    return 0;
}
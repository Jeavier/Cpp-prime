#include<iostream>
using namespace std;

int main(){
    float a,b,c;
    cout<<"Enter first side = ";
    cin>>a;
    cout<<"Enter second side = ";
    cin>>b;
    cout<<"Enter third side = ";
    cin>>c;
    
    if(a>b){
        if(a>c) cout<<a<<" is Greatest";

        else cout<<c<<" is Greatest";
    }
    else{
        if(b>c) cout<<b<<" is Greatest";

        else cout<<c<<" is Greatest";
    }
}
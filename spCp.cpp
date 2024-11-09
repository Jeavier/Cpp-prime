#include<iostream>
using namespace std;

int main(){
    float cp;
    cout<<"Enter cost price = ";
    cin>>cp;
    float sp;
    cout<<"Enter selling price = ";
    cin>>sp;
    
    if(sp>cp){
        cout<<"Profit of "<<sp-cp;
    }
    else if(cp>sp){
        cout<<"loss of "<<cp-sp;
    }
    else cout<<"no profit no loss"; 
}
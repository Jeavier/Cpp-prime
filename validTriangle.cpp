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
    
    if((a+b)>c && (b+c)>a && (c+a)>b){
        cout<<"Valid Triangle";
    }
   
    else cout<<"Invalid triangle"; 
}
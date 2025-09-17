#include<iostream>
using namespace std;
int main(){
    int a,b,r;
    cout<<"enter two numbers";
    cin>>a>>b;
    while(b!=0){
        r=a%b;
        a=b;
        b=r;
    }
    cout<<"gcd of the given two numbers is "<<a;
    return 0;
}

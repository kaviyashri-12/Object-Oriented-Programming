#include<iostream>
using namespace std;
int main(){
    int a,b,r;
    cout<<"enter two number:";
    cin>>a>>b;
    while(b!=0){
        int r=a%b;
        a=b;
        b=r;
    }
    cout<<"gcd ="<<a;
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int base,exp;
    long long result=1;
    cout<<"enter base and exponent";
    cin>>base>>exp;
    while(exp>0){
        result*=base;
        exp--;
    }
    cout<<"result = "<<result;
    return 0;

}
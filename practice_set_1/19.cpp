#include<iostream>
using namespace std;
int main(){
    float SI, P, R, T;
    cout<<"Enter Principal amount";
    cin>>P;
    cout<<"Enter Rate of Interest";
    cin>>R;
    cout<<"Enter Time";
    cin>>T;
    SI=(P*R*T)/100;
    cout<<"The simple interest for the given amount is"<<SI;
    return 0;
}
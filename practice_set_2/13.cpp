#include<iostream>
using namespace std;
int main(){
    int num, sum=0, temp, digit;
    cout<<"enter a three digit number:";
    cin>>num;
    temp=num;
    while(temp>0){
        digit=temp%10;
        sum=sum+(digit*digit*digit);
        temp/=10;
    }
    if(sum==num){
        cout<<"armstrong number";
    }
    else{
        cout<<"not an armstrong number";
    }
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int num, fact=1;
    cout<<"enter the number";
    cin>>num;
    int i=1;
    while(num>0){
        fact*=num;
        num--;
    }
    cout<<"factorial ="<<fact;
    return 0;
}
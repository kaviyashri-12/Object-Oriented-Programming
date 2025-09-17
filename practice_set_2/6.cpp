#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter number";
    cin>>num;
    do{
        cout<<num%10;
        num/=10;
    }while(num>0);
    return 0;
}
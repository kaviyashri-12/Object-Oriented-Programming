#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter a number";
    cin>>num;
    if(num<0){
        cout<<"Not a Prime!";
    }
    for(int i =2;i<=num/2;i++){
        if(num%i==0){
            cout<<"Not a Prime!";
            return 0;
        }
    }
    cout<<"Prime";
    return 0;
}
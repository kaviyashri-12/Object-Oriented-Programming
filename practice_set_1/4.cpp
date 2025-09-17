#include<iostream>
using namespace std;
int main(){
    int num1, num2, num3;
    cout<<"enter number 1:";
    cin>>num1;
    cout<<"enter number 2:";
    cin>>num2;
    cout<<"enter number 3:";
    cin>>num3;
    if(num1>=num2 && num1>=num3){
        cout<<num1 <<" is the largest";
    }
    else if(num2>=num1 && num2>=num3){
        cout<<num2<<" is the largest";
    }
    else{
        cout<<num3<<" is the lagest";
    }
    return 0;
    
}
#include<iostream>
using namespace std;
int main(){
    int num, digit, largest=0;
    cout<<"enter a number";
    cin>>num;
    do{
        digit=num%10;
        if(digit>largest){
            largest=digit;
        }
        num/=10;
    }while(num>0);
    cout<<"the largest number is:"<<largest;
    return 0;
}

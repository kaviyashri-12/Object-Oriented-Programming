#include<iostream>
using namespace std;
int main(){
    int sum=0;
    cout<<"sum of even numbers between 1-100:";
    for(int i=2;i<=100;i+=2){
        sum+=i;
        cout<<sum;
    }
    return 0;
}
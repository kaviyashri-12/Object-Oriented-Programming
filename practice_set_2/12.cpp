#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=50; i++){
        if(i%3==0 && i%5==0){
            cout<<"Fizz Buzz";
        }
        else if(i%3==0){
            cout<<"Fizz";
        }
        else if(i%5==0){
            cout<<"Buzz";
        }
        else{
            cout<<i<<" ";

        }
    }
    return 0;
}
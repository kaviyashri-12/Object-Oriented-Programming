#include<iostream>
using namespace std;
int main(){
    cout<<"prime numbers between 1 and 100 are:"<<endl;
    for(int n=2;n<=100;n++){
        int i;
        for(i=2;i<n;i++){
            if(n%i==0){
                break;//not a prime exit inner loop
            }
        }
        if(i==n){
            cout<<n<< " ";
        }
    }
    return 0;

}
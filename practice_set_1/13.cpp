#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    if(n<=1){
        cout<<n<<"is not a prime number";
        return 0;
    }
    int count=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            count++;
            break;
        }
    }
    if(count==0){
        cout<<n<<"is a prime number!"<<endl;
    }
    else{
        cout<<n<<"is not a prime number!"<<endl;
    }
    return 0;
}
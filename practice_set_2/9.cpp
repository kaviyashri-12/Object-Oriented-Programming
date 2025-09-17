#include<iostream>
using namespace std;
int main(){
    int num;
    do{
        cout<<"enter a negative number to stop:";
        cin>>num;
    }while(num>=0);
    return 0;

}
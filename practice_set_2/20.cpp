#include<iostream>
using namespace std;
int main(){
    int marks,sum=0,count=0;
    float average;
    do{
        cout<<"enter marks[enter a negative number to stop]:";
        cin>>marks;
        if(marks!=-1){
            sum+=marks;
            count++;
        }
    }while(marks!=-1);
    if(count>0){
        cout<<"average marks is = "<<sum/count;
    }
    else{
        cout<<"no marks entered";
    }
    return 0;
}
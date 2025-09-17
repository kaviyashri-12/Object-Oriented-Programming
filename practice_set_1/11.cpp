#include<iostream>
using namespace std;
int main(){
    int grade;
    cout<<"enter student's grade";
    cin>>grade;
    if(grade>=90 && grade<=100){
        cout<<"grade is A";
    }
    else if(grade>=80 && grade<=89){
        cout<<"grade is B";
    }
    else if(grade>=70 && grade<=79){
        cout<<"grade is C";
    }
    else if(grade>=60 && grade<=69){
        cout<<"grade is D";
    }
    else{
        cout<<"grade is F";
    }
    return 0;
}
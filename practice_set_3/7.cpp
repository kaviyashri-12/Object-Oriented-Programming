#include<iostream>
using namespace std;
class Distance{
    float feet;
    float inches;
public:
    Distance(){
        feet=0;
        inches=0;
    }   
    Distance(float f){
        feet=f;
        inches=0.0;
    } 
    Distance(float f, float i){
        feet=f;
        inches=i;
    }
    void display(){
        cout<<" feet: "<< feet<<endl;
        cout<<" inches: "<< inches<<endl;
    }
}; 
int main(){
    Distance d1;
    cout<<"*default*"<<endl;
    d1.display();

    Distance d2(2);
    cout<<"*feet only*"<<endl;
    d2.display();

    Distance d3(5,2);
    cout<<"*feet and inches"<<endl;
    d3.display();
    return 0;
}    
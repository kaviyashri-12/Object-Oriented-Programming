#include<iostream>
using namespace std;
class complex{
    double real;
    double imag;
public:
    complex(){
        real=0;
        imag=0;
    }
    complex(double r){
        real=r;
        imag=0;
    }
    complex(double r, double i){
        real=r;
        imag=i;
    }
    void display(){
        cout<< real<<" + "<<imag<<" i "<<endl;
    }
};
int main(){
    complex c1;
    cout<<"c1 (default constructor):";
    c1.display();

    complex c2(5);
    cout<<"c2 (real only constructor):";
    c2.display();
     
    complex c3(3,4);
    cout<<"c3 (real and imag constructor):";
    c3.display();
    return 0;

}
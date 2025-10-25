#include<iostream>
using namespace std;
class Rectangle{
    double length;
    double breadth;
public:
   Rectangle(double l, double b){
    length=l;
    breadth=b;
   } 
double getArea(){
    return length*breadth;
}      
};
int main(){
    Rectangle r(6,4);
    cout<<"area of rectangle: "<< r.getArea()<<endl;
    return 0;
}
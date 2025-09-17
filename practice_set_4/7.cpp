#include<iostream>
using namespace std;
class circle{
private:
    double radius;
public:
    void setRadius(double r){
        radius=r;
    }
    double getRadius(){
        return radius;
    }
    double getArea(){
        return 3.14*radius*radius;
    }

};
int main(){
    circle c;
    c.setRadius(5);
    cout<<"radius of the circle:"<<c.getRadius()<<endl;
    cout<<"area of the circle is:"<<c.getArea()<<endl;
    return 0;
}
#include<iostream>
using namespace std;
class Rectangle{
private:
    double length;
    double width;
public:
    void setLength(double l){
        length=l;
    }  
    void setWidth(double w){
        width=w;
    }  
    double getLength(){
        return length;

    }
    double getWidth(){
        return width;
    }
    double getArea(){
        return length*width;
    }
};
int main(){
    Rectangle r;
    r.setLength(5);
    r.setWidth(3);

    cout << "Length: " << r.getLength() << endl;
    cout << "Width: " << r.getWidth() << endl;
    cout << "Area: " << r.getArea() << endl;

    return 0;
} 
#include <iostream>

class Shape {
public:
    // Function Overloading with polymorphism
    void draw(int size) const {
        std::cout << "Drawing a generic shape of size: " << size << std::endl;
    }

    // Function Overloading with Same name but different parameters.
    void draw(double length, double width) const {
        std::cout << "Drawing a defined shape with dimensions: " << length << " x " << width << std::endl;
    }

    
    void displayInfo() const {
        std::cout << "Provided base class Info" << std::endl;
    }
};


class Circle : public Shape {
private:
    int radius;

public:
    Circle(int r) : radius(r) {}

    
    void displayInfo() const {
        std::cout << "This is a Circle with radius: " << radius << std::endl;
    }
};


int main() {
   

   
    std::cout << "\n A compile time polymorphism" << std::endl;
    Shape s;

    
    s.draw(10);             
    s.draw(5.5, 8.2);      
    
    Shape* basePtr;
    Circle c(15);

   
    basePtr = &c; 


   
    Shape baseObj;
    basePtr = &baseObj;
    
    
    basePtr->displayInfo();

    return 0;
}

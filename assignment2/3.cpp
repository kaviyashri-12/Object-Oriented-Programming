#include <iostream>
#include<string>
class Shape {
public:
    
    ~Shape() {} 

    double calculateArea() const { 
        return 0.0; 
    }
// fpr perimeter calculation.
    double calculatePerimeter() const { 
        return 0.0; 
    }
    
    
    void displayInfo() const {
        std::cout << "Shape Type: Unknown" << std::endl;
    }
};


class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    // Constructor. Rectangle inherits from Shape.
    Rectangle(double l, double w) : length(l), width(w) {
        if (length <= 0 || width <= 0) {
            std::cerr << "Values must always be positive." << std::endl;
            
            length = (length < 0) ? -length : length;
            width = (width < 0) ? -width : width;
        }
    }

    // Overriding the base class method for a specific Rectangle calculation.
    double calculateArea() const {
        return length * width;
    }

    // Overriding the base class method for a specific Rectangle calculation.
    double calculatePerimeter() const {
        return 2 * (length + width);
    }
    
    void displayInfo() const {
        // Base class displayInfo is NOT called here for simplicity.
        std::cout << "Shape Type: Rectangle" << std::endl;
        std::cout << "  Dimensions: " << length << " x " << width << std::endl;
    }
};


int main() {

    Rectangle rect(10.5, 4.0);
    
    // Use the derived class methods (they override the simple Shape methods)
    rect.displayInfo();
    std::cout << "Area: " << rect.calculateArea() << std::endl;
    std::cout << "Perimeter: " << rect.calculatePerimeter() << std::endl;
    
    std::cout << "\n" << std::endl;
    
    return 0;
}
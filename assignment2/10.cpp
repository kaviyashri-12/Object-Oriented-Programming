#include <iostream>

class Shape {
public:
    
    virtual double area() const = 0;

    virtual void displayInfo() const {
        std::cout << "Calculating Shape Area \n";
    }

    // Virtual destructor for safe cleanup.
    virtual ~Shape() {} 
};


class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    // Implementation of the pure virtual function.
    double area() const override {
       
        return 3.14159 * radius * radius;
    }

    void displayInfo() const override {
        std::cout << "Circle (Radius: " << radius << ") ";
    }
};


class Square : public Shape {
private:
    double side;

public:
    Square(double s) : side(s) {}

   
    double area() const override {
        return side * side;
    }

    void displayInfo() const override {
        std::cout << "Square (Side: " << side << ") ";
    }
};

int main() {



    Shape* shape1 = new Circle(5.0);
    Shape* shape2 = new Square(4.0);
    
    // Run-time Polymorphism: The correct area() is called based on the object type.
    shape1->displayInfo();
    std::cout << "Area: " << shape1->area() << std::endl; 

    shape2->displayInfo();
    std::cout << "Area: " << shape2->area() << std::endl; 

    // Clean up memory
    delete shape1;
    delete shape2;

    return 0;
}

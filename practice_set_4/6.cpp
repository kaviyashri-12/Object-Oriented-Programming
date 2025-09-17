#include <iostream>
using namespace std;

class Car {
private:
    string brand;
    string model;

public:
    void setBrand(string b) { brand = b; }
    void setModel(string m) { model = m; }
    string getBrand() { return brand; }
    string getModel() { return model; }
};

int main() {
    Car cars[2];

    cars[0].setBrand("Toyota");
    cars[0].setModel("Innova");

    cars[1].setBrand("Hyundai");
    cars[1].setModel("i20");

    for (int i = 0; i < 2; i++) {
        cout << "Car " << i+1 << " -> " << cars[i].getBrand()
             << " " << cars[i].getModel() << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

class Employee {
private:
    int id;
    double salary;

public:
    void setId(int i) {
         id = i;
    }
    void setSalary(double s) { 
        salary = s; 
    }
    int getId() {
         return id; 
    }
    double getSalary() { 
        return salary;
 }
};

int main() {
    Employee e1, e2;

    e1.setId(101);
    e1.setSalary(50000);

    e2.setId(102);
    e2.setSalary(60000);

    cout << "Employee 1 -> ID: " << e1.getId() << ", Salary: " << e1.getSalary() << endl;
    cout << "Employee 2 -> ID: " << e2.getId() << ", Salary: " << e2.getSalary() << endl;

    return 0;
}

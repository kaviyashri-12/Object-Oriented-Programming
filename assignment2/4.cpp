#include <iostream>
#include <string> // Required for std::string type
// Level 1: Person (Base Class)
class Person {
protected:
    std::string name;
    int age;

public:
    Person(const std::string& n, int a) : name(n), age(a) {}

    void showPersonInfo() const {
        std::cout << " Personal Data" << std::endl;
        std::cout << "  Name: " << name << std::endl;
        std::cout << "  Age: " << age << std::endl;
    }
};

// Level 2: Employee inherits from Person
class Employee : public Person {
protected:
    int employeeID;
    double salary;

public:
    // Employee constructor calls the Person constructor first.
    Employee(const std::string& n, int a, int id, double s)
        : Person(n, a), employeeID(id), salary(s) {}

    void showEmployeeInfo() const {
        // Inherited function is called.
        showPersonInfo(); 
        
        std::cout << " Employee Data" << std::endl;
        std::cout << "  ID: " << employeeID << std::endl;
        std::cout << "  Salary: $" << salary << std::endl;
    }
};

// Level 3: Manager inherits from Employee
class Manager : public Employee {
private:
    std::string department;
    int teamSize;

public:
    // Manager constructor calls the Employee constructor, completing the chain.
    Manager(const std::string& n, int a, int id, double s, const std::string& dept, int size)
        : Employee(n, a, id, s), department(dept), teamSize(size) {}

    void showManagerInfo() const {
        // Inherited function is called.
        showEmployeeInfo(); 

        std::cout << "  Manager Data " << std::endl;
        std::cout << "  Department: " << department << std::endl;
        std::cout << "  Team Size: " << teamSize << std::endl;
    }
};


int main() {
    std::cout << "--- Multilevel Inheritance (Person -> Employee -> Manager) ---\n" << std::endl;

    //the Manager object, which contains all data from all three levels.
    Manager boss(
        "Alex Lee", 
        38, 
        700, 
        120000.00, 
        "Development", 
        12
    );

    
    boss.showManagerInfo();
    
    std::cout << "\n" << std::endl;
    
    // Create an Employee object (Level 2).
    Employee staff(
        "Chris Green",
        24,
        851,
        65000.00
    );

    
    staff.showEmployeeInfo();

    return 0;
}

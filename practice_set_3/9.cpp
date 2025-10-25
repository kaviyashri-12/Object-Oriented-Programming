#include<iostream>
#include<string>
using namespace std;
class Employee{
    string name;
    int id;
    double salary;
public:
    Employee(string n, int i){
        name=n;
        id=i;
        salary=0.0;
    } 
    Employee(string n, int i,double s){
        name=n;
        id=i;
        salary=s;
    } 
    void display(){
        cout<<"name of the emp:"<<name<<endl;
        cout<<"id of the emp:"<<id<<endl;
        cout<<"salary of the emp:"<<salary<<endl;
    }
}; 
int main(){
    Employee e1("ravi",12);
    cout<<"emp name and id only:"<<endl;
    e1.display();
    Employee e2("suresh",07,10000);
    cout<<"emp name, id and salary: "<<endl;
    e2.display();
    return 0;
}   
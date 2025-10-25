#include<iostream>
using namespace std;
class student{
    string name;
    int age;
    float marks;
public:
   student(){ //default constructor
      name="unknown";
      age=0;
      marks=0;
    }
    student(string n, int a, float m){
        name=n;
        age=a;
        marks=m;
    }
    void display(){
        cout<<"name:"<<name<<endl;
        cout<<"age:"<<age<<endl;
        cout<<"marks:"<<marks<<endl;
    }
};
int main(){
    student s1;
    cout<<"student 1 details (default constructor):"<<endl;
    s1.display();
    cout <<endl;
    student s2("kavs", 19, 92);
    cout<<"student 2 details(parameterized constructor):"<<endl;
    s2.display();
    return 0;
}
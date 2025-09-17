#include<iostream>
using namespace std;
class student{
    private:
    string name;
    int age;
    public:
    void setName(string n){
        name=n;
    }
    void setAge(int a){
        age =a;
    }
    string getName(){
        return name;
    }
    int getAge(){
        return age;
    }
};
int main(){
    student s;
    s.setName("kavs");
    s.setAge(19);
    cout<<"name:"<<s.getName()<<endl;
    cout<<"age:"<<s.getAge()<<endl;
    return 0;
}

#include<iostream>
#include<string>
using namespace std;
class Car{
    string brand;
    string model;
    double price;
public:
    Car(string b){
        brand=b;
        model="unknown";
        price=0;
    } 
    Car(string b, string m){
        brand=b;
        model=m;
        price=0;
    }   
    Car(string b, string m, double p){
        brand=b;
        model=m;
        price=p;
    }
    void display(){
        cout<<" brand of the car"<<brand<<endl;
        cout<<" model of the car"<<model<<endl;
        cout<<" price of the car"<<price<<endl;
    }
};
int main(){
    Car c1("toyota");
    cout<<"brand only"<<endl;
    c1.display();
    Car c2("toyota","fortuner");
    cout<<"brand and model only"<<endl;
    c2.display();
    Car c3("toyota","fortuner",35000.50);
    cout<<"brand model and price"<<endl;
    c3.display();
    return 0;
}     
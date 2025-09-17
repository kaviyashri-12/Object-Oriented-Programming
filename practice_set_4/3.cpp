#include<iostream>
using namespace std;
class book{
private:
    string title;
    double price;
public:
    void setTitle(string t){
        title=t;
    }
    void setPrice(double p){
        price=p;
    }
    string getTitle(){
        return title;
    }
    double getPrice(){
        return price;
    }


};
int main(){
    book b;
    b.setTitle("oops");
    b.setPrice(500);
    cout<<"title:"<<b.getTitle()<<endl;
    cout<<"price:"<<b.getPrice()<<endl;
    return 0;
}
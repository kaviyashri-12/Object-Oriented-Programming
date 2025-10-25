#include<iostream>
#include<string>
using namespace std;
class Book{
    string title;
    string author;
    double price;
public:
    Book(string t){
        title=t;
        author="unknown";
        price=0.0;
    }
    Book(string t, string a){
        title=t;
        author=a;
        price=0.0;
    }  
    Book(string t, string a, double p){
        title=t;
        author=a;
        price=p;
    }  
    void display(){
        cout<<" BOOK TITLE "<<title<<endl;
        cout<<" BOOK AUTHOR "<<author<<endl;
        cout<<" BOOK PRICE "<<price<<endl;
    }
};
int main(){
    Book b1("harry potter");
    cout<<" **Default**"<<endl;
    b1.display();

    Book b2("Rich son poor dad","David");
    cout<<"** Only title and author**";
    b2.display();

    Book b3("Rich son poor dad","David", 590.6);
    cout<<"** Title, author price**";
    b3.display();
    return 0;
}
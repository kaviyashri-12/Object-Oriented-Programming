#include<iostream>
using namespace std;
class Time{
     int hours;
     int minutes;
     int seconds;
public:
   Time(){
    hours=0;
    minutes=0;
    seconds=0;
   } 
   Time(int h, int m){
    hours=h;
    minutes=m;
    seconds=0;
   } 
   Time(int h, int m, int s){
    hours=h;
    minutes=m;
    seconds=s;
   }
   void display(){
    cout<<"hours :"<<hours<<endl;
    cout<<"minutes :"<<minutes<<endl;
    cout<<"seconds :"<<seconds<<endl;
   }
};
int main(){
    Time t1;
    cout<<"default"<<endl;
    t1.display();

    Time t2(1,45);
    cout<<"hours and minutes only"<<endl;
    t2.display();

    Time t3(2,35,6);
    cout<<"hours minutes and seconds only"<<endl;
    t3.display();
    return 0;

}
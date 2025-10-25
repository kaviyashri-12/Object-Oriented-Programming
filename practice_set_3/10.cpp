#include<iostream>
#include<string>
using namespace std;
class Fraction{
    int numerator;
    int denominator;
public:
    Fraction(){
        numerator=0;
        denominator=1;
    }
    Fraction(int n){
        numerator=n;
        denominator=1;
    }
    Fraction(int n, int d){
        numerator=0;
        denominator=1;
    }

};
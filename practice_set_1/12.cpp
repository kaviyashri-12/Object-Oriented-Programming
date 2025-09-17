#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double a,b,c;
    cout<<"enter coefficients";
    cin>>a>>b>>c;
    double discriminant=b*b-4*a*c;
    if (discriminant > 0) {
        // real and distinct roots
        double root1 = (-b + sqrt(discriminant)) / (2*a);
        double root2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "Roots are real and different.\n";
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    }
    else if (discriminant == 0) {
        // real and equal roots
        double root = -b / (2*a);
        cout << "Roots are real and equal.\n";
        cout << "Root = " << root << endl;
    }
    else {
        // complex roots
        double realPart = -b / (2*a);
        double imaginaryPart = sqrt(-discriminant) / (2*a);
        cout << "Roots are complex and imaginary.\n";
        cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i" << endl;
    }

    return 0;

}
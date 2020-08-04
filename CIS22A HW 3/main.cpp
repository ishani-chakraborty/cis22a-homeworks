#include <iostream>
#include <iomanip>
#include <cmath>
/*
Homework 3
Author: Ishani Chakraborty
Program purpose: calculate the focus, the area, 
and the circumference of an ellipse
*/

using namespace std;

int main(){

    cout << "This program calculates the focus, area, and circumference of an ellipse." << endl;
    cout << endl;

    //var: a represents the semi-major axis input
    double a;
    cout << "Enter the semi-major axis value: ";
    cin >> a;

    //var: b represents the semi-major axis input
    double b;
    cout << "Enter the semi-minor axis value: ";
    cin >> b;
    cout << endl << "Thank you" << endl << endl << endl;

    /* Formula for the focus of an eclipse*/
    double p = pow(a, 2) - pow(b, 2);
    double focus = sqrt(p);

    /* Formula for the area of an eclipse*/
    double area = a * b * M_PI;

    /* Formula for the circumference of an eclipse*/
    double p1 = 3 * (a+b);
    double p2 = sqrt((10*a*b) + (3*(pow(a, 2) + pow(b, 2))));
    double circum = M_PI * (p1 - p2);

    /* Print statements*/
    cout << fixed << setprecision(2);
    cout << setw(6) << "The focus of the ellipse is:       " << setw(6) << focus << endl;
    cout << setw(6) << "The ellipse area is:               " << setw(6) << area << endl;
    cout << setw(6) << "The ellipse circumference is:      " << setw(6) << circum << endl;

    return 0; //must be last
}
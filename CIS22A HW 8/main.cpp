#include <iostream>
/* Ishani Chakraborty
Homework 8
This program calculates writes a function
to calculate the area & perimeter of a rectangle
*/
using namespace std;
bool rectangleAreaPerim(double, double, double &, double &);
int main()
{
    double width;
    double length;
    double area;
    double perimeter;
    bool valid;
    while (true)
    {
        cout << endl
             << "Enter length and width separated by spaces, or 0 0 to exit: ";
        cin >> width >> length;       
        if (width == 0 && length == 0){
            cout << "Goodbye" << endl;
            break;
        }
            
        valid = rectangleAreaPerim(width, length, area, perimeter);
        if (valid) {
            cout << endl << "Rectangle area is " << area;
            cout << endl << "Rectangle perimeter is " << perimeter;
        }
        else 
            cout << "Invalid Input";
    }
}

bool rectangleAreaPerim(double wid, double len, double &a, double &p)
{
    a = wid * len;            
    p = 2 * (wid + len); 
    if (a < 0 || p < 0)    
        return false;
    else
        return true;
}
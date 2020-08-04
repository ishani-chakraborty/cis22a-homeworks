#include <iostream>
/* Ishani Chakraborty
Homework 2
This program calculates the volume 
and surface area of a cuboid
*/
using namespace std;

int main()
{
    cout << "My name is Ishani Chakraborty" << endl;
    cout << "This program calculates the volume and surface area of a cuboid. " << endl;

    double length;
    cout << "Enter the cuboid length: ";
    cin >> length;

    double height;
    cout << "Enter the cuboid height: ";
    cin >> height;

    double width;
    cout << "Enter the cuboid width: ";
    cin >> width;
    cout << endl;

    double cuboidVolume = length * width * height;
    double surfaceArea = (2 * width * length) + (2 * height * length) + (2 * width * height);

    cout << "Volume of the cuboid (length " << length << " / height " << height << " / width " << width << ") is " << cuboidVolume << endl;
    cout << "Surface area of the cuboid (length " << length << " / height " << height << " / width " << width << ") is " << surfaceArea  << endl;
}
#include <iostream>
#include <cstdlib>
#include <ctime>
/* Ishani Chakraborty
Homework 4
This program plays a simple number game 
with the use of if/else if statements
*/
using namespace std;

int main(){
    cout << "This program plays a simple random number game." << endl; 

    /*vowel inputs separated by spaces (not necessary that input is a vowel)*/ 
    char input1, input2, input3, input4, input5; 
    cout << "Enter 5 vowel characters (a,e,i,o,u) separated by spaces: ";
    cin >> input1 >> input2 >> input3 >> input4 >> input5;

    /*variables that generate random numbers respective to the input value*/
    int rand1, rand2, rand3, rand4, rand5;
    if(input1 == 'a')
       rand1 = rand() % 20 + 1;
    else if (input1 == 'e')
        rand1 = rand() % 20 + 21;
    else if (input1 == 'i')
        rand1 = rand() % 20 + 41;
    else if (input1 == 'o')
        rand1 = rand() % 20 + 61;
    else if (input1 == 'u')
        rand1 = rand() % 20 + 81;
    else
    {
        rand1 = 0;
    }

    if (input2 == 'a')
        rand2 = rand() % 20 + 1;
    else if (input2 == 'e')
        rand2 = rand() % 20 + 21;
    else if (input2 == 'i')
        rand2 = rand() % 20 + 41;
    else if (input2 == 'o')
        rand2 = rand() % 20 + 61;
    else if (input2 == 'u')
        rand2 = rand() % 20 + 81;
    else
    {
        rand2 = 0;
    }

    if (input3 == 'a')
        rand3 = rand() % 20 + 1;
    else if (input3 == 'e')
        rand3 = rand() % 20 + 21;
    else if (input3 == 'i')
        rand3 = rand() % 20 + 41;
    else if (input3 == 'o')
        rand3 = rand() % 20 + 61;
    else if (input3 == 'u')
        rand3 = rand() % 20 + 81;
    else
    {
        rand3 = 0;
    } 
    
    if(input4 == 'a')
       rand4 = rand() % 20 + 1;
    else if (input4 == 'e')
        rand4 = rand() % 20 + 21;
    else if (input4 == 'i')
        rand4 = rand() % 20 + 41;
    else if (input4 == 'o')
        rand4 = rand() % 20 + 61;
    else if (input4 == 'u')
        rand4 = rand() % 20 + 81;
    else
    {
        rand4 = 0;
    }

    if (input5 == 'a')
        rand5 = rand() % 20 + 1;
    else if (input5 == 'e')
        rand5 = rand() % 20 + 21;
    else if (input5 == 'i')
        rand5 = rand() % 20 + 41;
    else if (input5 == 'o')
        rand5 = rand() % 20 + 61;
    else if (input5 == 'u')
        rand5 = rand() % 20 + 81;
    else
    {
        rand5 = 0;
    }

    /*final print statement that prints 5 randomly generated numbers*/
    cout << "The random numbers are " << rand1 << " " << rand2 << " " << rand3 << " " << rand4 << " " << rand5 << endl << endl;
}
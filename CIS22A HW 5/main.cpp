#include <iomanip>
#include <iostream>
/* Ishani Chakraborty
Homework 5
Creates a  program to take orders for a restaurant. 
An order can contain only one single item.
*/
using namespace std;

int main(){
    string item_name;
    double item_price;
    int max_quantity; 

    cout << "Welcome to the CIS22A restaurant. You can choose of the following items : " << endl << endl;
    cout << "a- Grilled salmon, price $28.99" << endl;
    cout << "b- New York Steak, price $22.99" << endl;
    cout << "c- Roast Chicken, price $14.99" << endl;
    cout << "d- Salad, price $5.99" << endl;
    cout << "e- Soup, price $7.99" << endl;
    cout << "f- Hamburger, price $4.99" << endl;
    cout << "g- Soft drink, price $1.29" << endl;
    cout << "h- Tea, price $1.50" << endl;
    cout << "i- Orange juice, price $2.50" << endl << endl << endl;

    char item;
    int quantity;
    cout << "Select a letter from the menu: ";
    cin >> item;

    if(item == 'a') {
        item_name = "Grilled salmon";
        item_price = 28.99;
    } else if (item == 'b'){
        item_name = "New York Steak";
        item_price = 22.99;
    } else if (item == 'c') {
        item_name = "Roast Chicken";
        item_price = 14.99;
    } else if (item == 'd') {
        item_name = "Salad";
        item_price = 5.99;
    } else if (item == 'e') {
        item_name = "Soup";
        item_price = 7.99;
        max_quantity = 200;
    } else if (item == 'f') {
        item_name = "Hamburger";
        item_price = 4.99;
    } else if (item == 'g') {
        item_name = "Soft drink";
        item_price = 1.29;
    } else if (item == 'h') {
        item_name = "Tea";
        item_price = 1.50;
    } else if (item == 'i') {
        item_name = "Orange Juice";
        item_price = 2.50;
    } else {
        cout << "Invalid item" << endl;
        return 0;
    }

    cout << "Enter the quantity: ";
    cin >> quantity;
    cout << endl;
    if (quantity < 0) {
        cout << "Invalid item quantity. It cannot be negative." << endl;
        return 0;
    }
    if(item == 'a' || item == 'b' || item == 'c'){
        max_quantity = 50;
        if(quantity > max_quantity){
            cout << "Invalid item quantity. It must not exceed 50." << endl;
            return 0;
        }
    } else if (item == 'd' || item == 'e' || item == 'f' || item == 'g' || item == 'h' || item == 'i'){
        max_quantity = 200;
        if (quantity > max_quantity) {
            cout << "Invalid item quantity. It must not exceed 200." << endl;
            return 0;
        }
    }

    double total = quantity * item_price;
    double sales_tax = (0.0975*total);
    cout << fixed << setprecision(2);
    cout << "The item price for (" << quantity << " x " << item_name << ") is: $" << total << endl;
    cout << "The sales tax is $" << sales_tax << endl << endl;

    double gratuity;
    cout << "Enter the gratuity amount: ";
    cin >> gratuity;
    cout << endl;
    if(gratuity < 0.00){
        cout << "Invalid gratuity amount." << endl;
        return 0;
    }

    double bill_total = total + sales_tax + gratuity;
    cout << "Your total bill is $" << bill_total << endl << endl;
    cout << "Thank you for your order" << endl;
}
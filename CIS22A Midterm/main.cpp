#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    int m_size;
    char quality;
    int quantity;
    cout << "Enter the memory size of the console (32 or 16 gigabytes): ";
    cin >> m_size;
    if(!(m_size == 32 || m_size == 16)){
        cout << "Invalid memory size!" << endl;
    } 
    cout << "Enter the quality of the console (N for New, R for Refurbished, or D for Dented): ";
    cin >> quality;
    if (!(quality == 'R' || quality == 'N' || quality == 'D'))
    {
        cout << "Invalid console quality!" << endl;
    }
    cout << "Enter the console quantity to buy: ";
    cin >> quantity;
    cout << endl << endl;
    if (quantity < 0){
        cout << "Invalid console quantity!" << endl;
    } 
    
    double price;
    if(m_size == 32){
        if(quality == 'N')
            price = 549.99;
        else if (quality == 'R')
            price = 429.99;
        else if (quality == 'D')
           price =  359.99;
    } else if (m_size == 16) {
        if (quality == 'N')
            price = 499.99;
        else if (quality == 'R')
            price = 419.99;
        else if (quality == 'D')
            price = 339.99;
    } 
    
    double item_price, sales_tax, total_bill;
    item_price = price * quantity;
    sales_tax = (item_price * 0.0925); 
    total_bill = item_price + sales_tax;
    cout << "The item price is $" << item_price << endl;
    cout << "The sale tax is $" << sales_tax << endl;
    cout << "The total bill is $" << total_bill << endl;
}

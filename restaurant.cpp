
#include <iostream>
#include <stdio.h>
#include <iomanip>
 
using namespace std;
 
void display_initial2 () {
    cout << "\n   ----------WELCOME----------\n";
    cout << " ________________________________  \n";
    cout << "|1         |        10%' discount|  \n";
    cout << "|2         |        20%' discount| \n";
    cout << "|3         |        30%' discount| \n";
    cout << "|__________|_____________________| \n\n";
}
 
void askForName ( char* name, int size) {
    cout << "Enter Name     :     ";
     cin.getline(name, size); 
}
 
float askForValue (const char* prompt) {
    float value;
    cout << prompt; 
    cin >> value;
    cin.ignore(1000, '\n'); 
    return value;
}
 
float getAmount (float price, float quantity){
    float amount = price * quantity;
    return amount;
}
 
float getDiscount (int discount, float amount, float totalAmount) {
    float finalPrice;
    int disvar;
    switch (discount) {
        case 1: {
            finalPrice = amount  - (amount * 0.10);
            disvar = finalPrice - totalAmount;
            break;
        }
        case 2: {
            finalPrice = amount  - (amount * 0.20);
            disvar = finalPrice - totalAmount;
            break;
        }
        case 3: {
            finalPrice = amount  - (amount * 0.30);
            disvar = finalPrice - totalAmount;
            break;
        }
        default: {
            cout << "Invalid Discount Price!";
            finalPrice = amount;
            break;
        }
    }
 
    // Additional 10% discount if the purchase amount exceeds 10,000
    if (totalAmount > 10000) {
        finalPrice = finalPrice - (finalPrice * 0.10);
    }
 
return finalPrice;
}
 
void print (char name[][35], float price[], float quantity[], int discount[], float amount[], float totalAmount, float finalAmount, float discAmount[], float newPrice[]){
    cout << "============================================================================================\n";
    cout << "                                        FINAL RECEIPT                                       \n";
    cout << "============================================================================================\n";
    cout << left << setw(17) << "ITEM"
         << left << setw(17) << "PRICE"
         << left << setw(17) << "QTY"
         << left << setw(17) << "AMOUNT"
         << left << setw(17) << "DISC PRICE"
         << left << setw(17) << "NEW PRICE";
    cout << "\n------------------------------------------------------------------------------------------\n";
    
    for (int i = 0 ; i < 10 ; i++){    
    int discPercent = (discount[i] == 1) ? 10
                         : (discount[i] == 2) ? 20
                         : (discount[i] == 3) ? 30
                         : 0;
    
    
        cout << left << setw(17) << name[i]                      //the name of the item
             << left << setw(17)<< price[i]                      //price PER ITEM
             << left << setw(17)<< quantity[i]                   //how many items
             << left << setw(17)<< amount[i]                     //price * quantity
             << left << setw(17)<< discAmount[i]                 //how much is deducted after discount
             << left << setw(17)<< newPrice[i]   << endl;        //price after discount
    }
cout << "------------------------------------------------------------------------------------------\n";
cout << "                         TOTAL AMOUNT OF PURCHASE:            "<< totalAmount << endl;
cout << "                         TOTAL ALLOVER DISCOUNT :             "<< (totalAmount - finalAmount) << endl;
cout << "                         TOTAL NEW PRICE OF PURCHASE:         "<< finalAmount << endl;
 
 
}
 
 
 
 
int main(){
    char name[10][35];
    int discount[10];
    float price[10], quantity[10], amount[10], totalAmount, finalAmount;
    float discAmount[10], newPrice[10];
    totalAmount = 0;
    finalAmount = 0;
 
for (int i = 0 ; i < 10 ; i++){
   askForName(name[i], 35);
   display_initial2();
    price[i] = askForValue("Enter Price        :     ");
    quantity[i] = askForValue("Enter quantity     :     ");
    discount[i] = askForValue("Enter Discount     :     ");
  
  
    amount[i] =  getAmount(price[i], quantity[i]);
    totalAmount += amount[i];
 
    newPrice[i] = getDiscount(discount[i], amount[i], totalAmount);
    discAmount[i] = amount[i] - newPrice[i];
    finalAmount += newPrice[i];
 
}
    print (name,  price,  quantity,  discount,  amount,  totalAmount,  finalAmount, discAmount, newPrice);
 
 
 
 
}

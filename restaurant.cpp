#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Handles input + calculation for ONE transaction.
// Called manually 10 times in main with 10 separately named variables.
void processTransaction(int transactionNum, string &name, float &price, float &quantity,
                         int &discountCode, float &amount, float &totalDiscount, float &newPrice,
                         float &grandTotalAmount, float &grandTotalDiscount, float &grandTotalNewPrice) {
    cout << "\n--- Transaction " << transactionNum << " ---\n";
    cout << "Enter Item Name: ";
    cin.ignore(1000, '\n'); // clear leftover newline from previous cin >>
    getline(cin, name);

    cout << "Enter Price: ";
    cin >> price;

    cout << "Enter Quantity: ";
    cin >> quantity;

    cout << "Enter Discount Code (1, 2, or 3): ";
    cin >> discountCode;

    amount = price * quantity;

    float primaryRate = 0.0;
    if (discountCode == 1) {
        primaryRate = 0.10;
    } else if (discountCode == 2) {
        primaryRate = 0.20;
    } else if (discountCode == 3) {
        primaryRate = 0.30;
    }

    float primaryDiscount = amount * primaryRate;

    float additionalDiscount = 0.0;
    if (amount > 10000.00) {
        additionalDiscount = amount * 0.10;
    }

    totalDiscount = primaryDiscount + additionalDiscount;
    newPrice = amount - totalDiscount;

    grandTotalAmount += amount;
    grandTotalDiscount += totalDiscount;
    grandTotalNewPrice += newPrice;
}

// Prints ONE row of the results table.
void printRow(const string &name, float quantity, float price, float amount,
              float totalDiscount, float newPrice) {
    cout << left << setw(25) << name
         << setw(10) << quantity
         << setw(12) << price
         << setw(15) << amount
         << setw(18) << totalDiscount
         << setw(15) << newPrice << endl;
}

int main() {
    // 10 separately named variables per field instead of arrays
    string name1, name2, name3, name4, name5, name6, name7, name8, name9, name10;
    float price1, price2, price3, price4, price5, price6, price7, price8, price9, price10;
    float quantity1, quantity2, quantity3, quantity4, quantity5, quantity6, quantity7, quantity8, quantity9, quantity10;
    int discountCode1, discountCode2, discountCode3, discountCode4, discountCode5, discountCode6, discountCode7, discountCode8, discountCode9, discountCode10;
    float amount1, amount2, amount3, amount4, amount5, amount6, amount7, amount8, amount9, amount10;
    float totalDiscount1, totalDiscount2, totalDiscount3, totalDiscount4, totalDiscount5, totalDiscount6, totalDiscount7, totalDiscount8, totalDiscount9, totalDiscount10;
    float newPrice1, newPrice2, newPrice3, newPrice4, newPrice5, newPrice6, newPrice7, newPrice8, newPrice9, newPrice10;

    float grandTotalAmount = 0.0;
    float grandTotalDiscount = 0.0;
    float grandTotalNewPrice = 0.0;

    // ----- INPUT PHASE: 10 manual calls, one per transaction -----
    processTransaction(1, name1, price1, quantity1, discountCode1, amount1, totalDiscount1, newPrice1, grandTotalAmount, grandTotalDiscount, grandTotalNewPrice);
    processTransaction(2, name2, price2, quantity2, discountCode2, amount2, totalDiscount2, newPrice2, grandTotalAmount, grandTotalDiscount, grandTotalNewPrice);
    processTransaction(3, name3, price3, quantity3, discountCode3, amount3, totalDiscount3, newPrice3, grandTotalAmount, grandTotalDiscount, grandTotalNewPrice);
    processTransaction(4, name4, price4, quantity4, discountCode4, amount4, totalDiscount4, newPrice4, grandTotalAmount, grandTotalDiscount, grandTotalNewPrice);
    processTransaction(5, name5, price5, quantity5, discountCode5, amount5, totalDiscount5, newPrice5, grandTotalAmount, grandTotalDiscount, grandTotalNewPrice);
    processTransaction(6, name6, price6, quantity6, discountCode6, amount6, totalDiscount6, newPrice6, grandTotalAmount, grandTotalDiscount, grandTotalNewPrice);
    processTransaction(7, name7, price7, quantity7, discountCode7, amount7, totalDiscount7, newPrice7, grandTotalAmount, grandTotalDiscount, grandTotalNewPrice);
    processTransaction(8, name8, price8, quantity8, discountCode8, amount8, totalDiscount8, newPrice8, grandTotalAmount, grandTotalDiscount, grandTotalNewPrice);
    processTransaction(9, name9, price9, quantity9, discountCode9, amount9, totalDiscount9, newPrice9, grandTotalAmount, grandTotalDiscount, grandTotalNewPrice);
    processTransaction(10, name10, price10, quantity10, discountCode10, amount10, totalDiscount10, newPrice10, grandTotalAmount, grandTotalDiscount, grandTotalNewPrice);

    // ----- DISPLAY PHASE: table printed after all input is collected -----
    cout << "\n===================================================================================================\n";
    cout << left << setw(25) << "ITEM"
         << setw(10) << "QTY"
         << setw(12) << "PRICE"
         << setw(15) << "AMOUNT"
         << setw(18) << "TOTAL DISC."
         << setw(15) << "NEW PRICE" << endl;
    cout << "===================================================================================================\n";
    cout << fixed << setprecision(2);

    printRow(name1, quantity1, price1, amount1, totalDiscount1, newPrice1);
    printRow(name2, quantity2, price2, amount2, totalDiscount2, newPrice2);
    printRow(name3, quantity3, price3, amount3, totalDiscount3, newPrice3);
    printRow(name4, quantity4, price4, amount4, totalDiscount4, newPrice4);
    printRow(name5, quantity5, price5, amount5, totalDiscount5, newPrice5);
    printRow(name6, quantity6, price6, amount6, totalDiscount6, newPrice6);
    printRow(name7, quantity7, price7, amount7, totalDiscount7, newPrice7);
    printRow(name8, quantity8, price8, amount8, totalDiscount8, newPrice8);
    printRow(name9, quantity9, price9, amount9, totalDiscount9, newPrice9);
    printRow(name10, quantity10, price10, amount10, totalDiscount10, newPrice10);

    cout << "---------------------------------------------------------------------------------------------------\n";
    cout << "TOTAL AMOUNT OF PURCHASE  : " << grandTotalAmount << endl;
    cout << "TOTAL ALLOVER DISCOUNT    : " << grandTotalDiscount << endl;
    cout << "TOTAL NEW PRICE           : " << grandTotalNewPrice << endl;
    cout << "===================================================================================================\n";

    return 0;
}
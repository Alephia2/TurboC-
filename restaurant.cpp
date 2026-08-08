#include <iostream>
#include <stdio.h>

using namespace std;

void display_initial () {
printf("  __  __          _____  _____          _         _    ____    _  ___    _ _____ _______            _   _ _____  _____  ______ _____  \n");
    printf(" |  \\/  |   /\\   |  __ \\ / ____|   /\\   | |    | |    / __ \\  | |/ / |  | |  __ \\__   __|    /\\    | \\ | |  __ \\|  __ \\|  ____|_   _| \n");
    printf(" | \\  / |  /  \\  | |__) | |  __   /  \\  | |    | |   | |  | | | ' /| |  | | |__) | | |      /  \\   |  \\| | |  | | |__) | |__    | |   \n");
    printf(" | |\\/| | / /\\ \\ |  _  /| | |_ | / /\\ \\ | |    | |   | |  | | |  < | |  | |  _  /  | |     / /\\ \\  | . ` | |  | |  _  /|  __|   | |   \n");
    printf(" | |  | |/ ____ \\| | \\ \\| |__| |/ ____ \\| |____| |___| |__| | | . \\| |__| | | \\ \\  | |    / ____ \\ |  |\\  | |__| | | \\ \\| |____ _| |_  \n");
    printf(" |_|__|_/_/___ \\_\\_|_ \\_\\\\_____/_/    \\_\\______|______\\____/  |_|\\_\\\\____/|_|  \\_\\|_|    /_/    \\_\\|  | \\_|_____/|_|  \\_\\______|_____| \n");
    printf(" |  _ \\ / ____|/ ____|     |  ____|          /_ |  /\\                                                                                 \n");
    printf(" | |_) | (___ | |     _ __ | |__      ______  | | /  \\                                                                                \n");
    printf(" |  _ < \\___ \\| |    | '_ \\|  __|    |______| | |/ /\\ \\                                                                               \n");
    printf(" | |_) |____) | |____| |_) | |____            | |/ ____ \\                                                                             \n");
    printf(" |____/|_____/ \\_____| .__/|______|           |_/_/    \\_\\                                                                            \n");
    printf("                     | |                                                                                                              \n");
    printf("                     |_|                                                                                                              \n");


}
void display_initial2 () {
    cout << "   ----------WELCOME----------\n";
    cout << " ________________________________  \n";
    cout << "|1         |        10%' discount|  \n";
    cout << "|2         |        20%' discount| \n";
    cout << "|3         |        30%' discount| \n";
    cout << "|__________|_____________________| \n\n";
}





void askForName (char* name, int size) {
    cout << "Enter Name     :     ";
    cin.get(name, size); 
    cin.ignore(1000, '\n'); 
}

float askForValue (char* prompt) {
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
        }
    }
return finalPrice;
}

void print (char name[][35], float price[], float quantity[], int discount[], float amount[], float totalAmount, float finalAmount, float discAmount[], float newPrice[]){
    cout << "=============================================================================\n";
    cout << "                               FINAL RECEIPT                                 \n";
    cout << "=============================================================================\n";
    cout << "    ITEM         PRICE        QTY        AMOUNT        DISC        NEW PRICE \n";
    cout << "------------------------------------------------------------------------------\n";
    
    for (int i = 0 ; i < 2 ; i++){    
    int discPercent = (discount[i] == 1) ? 10
                         : (discount[i] == 2) ? 20
                         : (discount[i] == 3) ? 30
                         : 0;
    
    
        cout << name[i] << "        "<< price[i] << "        "<< quantity[i] << "        " << amount[i] << "        "<< discAmount[i] << "        " << newPrice[i] << endl;
    }

cout << "------------------------------------------------------------------------------\n";
cout << "                         TOTAL AMOUNT OF PURCHASE:         "<< totalAmount << endl;
cout << "                         TOTAL ALLOVER DISCOUNT :         "<< (totalAmount - finalAmount) << endl;
cout << "                         TOTAL NEW PRICE OF PURCHASE:         "<< finalAmount << endl;


}




int main(){
    char name[2][35];
    int discount[2];
    float price[2], quantity[2], amount[2], totalAmount, finalPrice, finalAmount, disvar;
    float discAmount[2], newPrice[2];
    display_initial();
    totalAmount = 0;
    finalAmount = 0;

for (int i = 0 ; i < 2 ; i++){
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

    if (totalAmount > 10000) {
         finalPrice = amount[i]  - (amount[i] * 0.10); 
         disvar = finalPrice - totalAmount;
    }

}
    print (name,  price,  quantity,  discount,  amount,  totalAmount,  finalAmount, discAmount, newPrice);




}
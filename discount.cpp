#include <conio.h>
#include <iostream>
#include <stdio.h>
#define standard_price 220

using namespace std;

void initial_display () {
    printf ("--Welcome!--\n");
    printf ("N/A - 0   Student - 1   Sinior - 2\n");
}

void ask_for_name ( char* name) {
    printf ("Name: ");
    scanf ("%67s", name);
}


int ask_for_status () {
    int status;
    cout << "Enter which discount are you (0, 1, 2): ";
    cin >> status;
    return status;
}

int ask_for_age () { 
    int age;
    cout << "Age: ";
    cin >> age;
    return age;
}

char ask_for_matinee_time () {
    char matinee;
    printf ("Is it a Matinee Show? (y/n): ");
    scanf (" %c", &matinee);
    return matinee;
}

int get_after_discount (int status, int age) {
    int discount = standard_price;
    if ((status == 1) && age < 18) {
	discount = standard_price - 30;
    } else if (status == 2 || age >= 60) {
	discount = standard_price -  30;
    } else if (status == 1) {
	discount = standard_price - 20;
    } else {
	discount = standard_price;
    }
    return discount;
}

void paDisplayPo (char* name, int age, int matinee, int discount) {
    printf("\n----- TICKET RECEIPT -----\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Matinee: %c\n", matinee);
    printf("Total Price: Php %d\n", discount);
    printf("--------------------------\n\n");
}

char ask_try () {
    char try_again;
    printf ("another transaction (y/n): ");
    scanf (" %c", &try_again);
    return try_again;
}

int main () {
    char name[67], matinee_day[3];
    int age, discount, status;
    char matinee,try_again;

    start:
    initial_display ();

    ask_for_name(name);
    age = ask_for_age();
    status = ask_for_status();
    matinee = ask_for_matinee_time();

    discount = get_after_discount (status, age);

    if ((matinee == 'y' || matinee == 'Y') && status != 2 && age < 60) {
	discount = discount - 40;
    }

paDisplayPo(name, age, matinee, discount);

    try_again = ask_try();
    if (try_again == 'y' || try_again == 'Y') {
	goto start;
    }

getch ();
return 0;
}
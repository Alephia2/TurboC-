#include <conio.h>
#include <iostream>
#include <stdio.h>
#include <string>
#define standard_price 220

using namespace std;

void initial_display () {
    printf ("--Welcome!--\n");
    printf ("N/A - 0   Student - 1 \n");
}

void ask_for_name ( char* name) {
    printf ("Name: ");
    scanf ("%67s", name);
}


int ask_for_status () {
    int status;
    printf ("Plese Enter if you're a student: ");
    scanf ("%d", &status);
    return status;
}

int ask_for_age () {
    int age;
    printf ("Age: ");
    scanf ("%3d", &age);
    return age;
}

int ask_for_matinee_time () {
    int matinee;
    printf ("Matinee time (enter int): ");
    scanf ("%d", &matinee);
    return matinee;
}

void ask_for_matinee_day (char* matinee_day) {
    printf ("AM or PM?: ");
    scanf (" %2s", matinee_day);
}


int get_after_discount (int status, int age) {
    int discount = standard_price;
    if (status == 1 && age < 18) {
        discount = standard_price - 40;
    } else if (age >= 60) {
        discount = standard_price -  60;
    } else if (status == 1) {
        discount = standard_price - 20;
    } else if (status == 0) {
        discount = standard_price;
    }
    return discount;
}

void paDisplayPo (char* name, int age, int matinee, char* matinee_day, int discount) {
    printf("\n----- TICKET RECEIPT -----\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Time: %d %s\n", matinee, matinee_day);
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
    int age, status, discount;
    int matinee;
    char try_again;
    
    start:
    initial_display ();

    ask_for_name(name); 
    age = ask_for_age();
    status = ask_for_status();
    matinee = ask_for_matinee_time();
    ask_for_matinee_day(matinee_day);

    discount = get_after_discount (status, age);

    if (matinee < 5 && (matinee_day[0] == 'P' || matinee_day[0] == 'p') && (age <= 60)) {
        discount = discount - 40;
    }

paDisplayPo(name, age, matinee, matinee_day, discount);

    try_again = ask_try();
    if (try_again == 'y' || try_again == 'Y') {
        goto start;
    }

    
}
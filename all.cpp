#include <iostream>
#include <math.h>
#include <iomanip>
#include <cstdio>

using namespace std;

int askForValue(const char* prompt) {
    int value;
    cout << prompt;
    cin >> value;
    return value;
}

void initialDisplay() {
    cout << "=============================================================\n";
    cout << "                         WELCOME                             \n";
    cout << "=============================================================\n";
    cout << "         ACTIVITY 1 (Circle)              -     1\n"
         << "         ACTIVITY 2 (Yard Conversion)     -     2\n"
         << "         ACTIVITY 3 (Projectile)          -     3\n"
         << "         ACTIVITY 4 (Grade Computation)   -    4\n"
         << "         ACTIVITY 5 (Calculator)          -     5\n"
         << "-------------------------------------------------------------\n"
         << "         EXIT                             -       6\n\n";
}

void activity1() {
    float r, area, circumference;
    cout << "Please Enter the Radius of the circle: ";
    cin >> r;
    area = M_PI * pow(r, 2);
    circumference = 2 * M_PI * r;
    cout << "With " << r << " units is the radius, "
         << "Area and circumference of the given circle is "
         << area << " square units and " << circumference << " units respectively.\n";
}

void activity2() {
    double yrd;
    cout << "Enter Length in Yards: ";
    cin >> yrd;

    float in  = yrd * 36;
    float cm  = yrd * 91.44;
    double mm = yrd * 914.4;
    double m  = yrd * 0.9144;
    double km = yrd * 0.0009144;
    double mi = yrd * 0.000568182;
    double ft = yrd * 3;

    cout << "Inches: " << in << "\n" << "Centimeter: " << cm << "\n";
    cout << "Milimeter: " << mm << "\n" << "Meter: " << m << "\n";
    printf("Kilometer: %f \n", km);
    printf("Miles: %f \n", mi);
    cout << "Feet: " << ft << "\n";
}

void activity3() {
    float gravity = 32.2;
    float distance, velocity, angle_in_degrees;
    cout << "Enter distance in feet: ";
    cin >> distance;
    cout << "Enter velocity in f/s: ";
    cin >> velocity;
    cout << "Enter angle in degrees: ";
    cin >> angle_in_degrees;

    float angle_in_radians = angle_in_degrees * (M_PI / 180);
    float time = distance / (velocity * cos(angle_in_radians));
    float max_height = velocity * sin(angle_in_radians) * time - (gravity * pow(time, 2)) / 2;

    cout << "\n\n" << "Distance: " << distance << " feet" << endl;
    cout << "Velocity: " << velocity << " f/s" << endl;
    cout << "Angle: " << angle_in_degrees << " degrees" << endl;
    cout << "Angle in radians: " << angle_in_radians << endl;
    cout << "Flight time: " << time << " seconds" << endl;
    cout << "Maximum height: " << max_height << " feet" << endl;
}

void activity4() {
    char name[50];
    float mq1, mq2, mq3, lab1, lab2, lab3, midterm_exam;

    cout << "Enter the name of the Student (use _ for spaces): ";
    cin >> name;

    top1:
    cout << "Enter the MQ1: ";
    cin >> mq1;
    if (mq1 < 60 || mq1 > 100) {
        cout << "-Please try again, grades must be between 60 and 100!-\n";
        goto top1;
    }

    top2:
    cout << "Enter the MQ2: ";
    cin >> mq2;
    if (mq2 < 60 || mq2 > 100) {
        cout << "-Please try again, grades must be between 60 and 100!-\n";
        goto top2;
    }

    top3:
    cout << "Enter the MQ3: ";
    cin >> mq3;
    if (mq3 < 60 || mq3 > 100) {
        cout << "-Please try again, grades must be between 60 and 100!-\n";
        goto top3;
    }

    top4:
    cout << "Enter the Lab1: ";
    cin >> lab1;
    if (lab1 < 60 || lab1 > 100) {
        cout << "-Please try again, grades must be between 60 and 100!-\n";
        goto top4;
    }

    top5:
    cout << "Enter the Lab2: ";
    cin >> lab2;
    if (lab2 < 60 || lab2 > 100) {
        cout << "-Please try again, grades must be between 60 and 100!-\n";
        goto top5;
    }

    top6:
    cout << "Enter the Lab3: ";
    cin >> lab3;
    if (lab3 < 60 || lab3 > 100) {
        cout << "-Please try again, grades must be between 60 and 100!-\n";
        goto top6;
    }

    top7:
    cout << "Enter the Midterm Exam: ";
    cin >> midterm_exam;
    if (midterm_exam < 60 || midterm_exam > 100) {
        cout << "-Please try again, grades must be between 60 and 100!-\n";
        goto top7;
    }

    float mq_ave = (mq1 + mq2 + mq3) / 3;
    float lab_ave = (lab1 + lab2 + lab3) / 3;
    float class_standing = (2.0 / 3.0) * mq_ave + (1.0 / 3.0) * lab_ave;

    float midterm_grade = (2.0 / 3.0) * class_standing + (1.0 / 3.0) * midterm_exam;

    float point_grade;
    if (midterm_grade >= 98) point_grade = 1.00;
    else if (midterm_grade >= 95) point_grade = 1.25;
    else if (midterm_grade >= 92) point_grade = 1.50;
    else if (midterm_grade >= 89) point_grade = 1.75;
    else if (midterm_grade >= 86) point_grade = 2.00;
    else if (midterm_grade >= 83) point_grade = 2.25;
    else if (midterm_grade >= 80) point_grade = 2.50;
    else if (midterm_grade >= 77) point_grade = 2.75;
    else if (midterm_grade >= 75) point_grade = 3.00;
    else if (midterm_grade >= 72) point_grade = 4.00;
    else point_grade = 5.00;

    cout << "\nStudent's Name: " << name;
    cout << "\nMidterm Grade Percentage: " << midterm_grade << "%";
    cout << "\nMidterm Grade Point: " << point_grade;

    if (point_grade <= 3.00)
        cout << "\nStudent Remark: PASSED!\n";
    else
        cout << "\nStudent Remark: FAILED...\n";
}

double get_number(const char* prompt) {
    double value;
    cout << prompt;
    cin >> value;
    return value;
}

void determine_result(double num1, double num2, char op) {
    switch (op) {
        case '+':
            cout << "Sum: " << (num1 + num2) << endl;
            break;
        case '-':
            cout << "Difference: " << (num1 - num2) << endl;
            break;
        case '*':
            cout << "Product: " << (num1 * num2) << endl;
            break;
        case '/':
            if (num2 == 0) {
                cout << "Error: Division by zero is not allowed." << endl;
            } else {
                cout << "Quotient: " << (num1 / num2) << endl;
            }
            break;
        case '%':
            if ((long long)num2 == 0) {
                cout << "Error: Division by zero is not allowed." << endl;
            } else {
                cout << "Remainder: " << ((long long)num1 % (long long)num2) << endl;
            }
            break;
        case '^':
            cout << "Power: " << pow(num1, num2) << endl;
            break;
        case 'e':
            cout << "Exponential of sum: " << exp(num1 + num2) << endl;
            break;
        default:
            cout << "Error: Invalid operator." << endl;
            break;
    }
}

void activity5() {
    double num1, num2;
    char op;

    cout << "=== Simple Calculator ===" << endl;

    num1 = get_number("Enter the first number: ");
    num2 = get_number("Enter the second number: ");

    cout << "Enter an operator (+, -, *, /, %, ^, e): ";
    cin >> op;

    determine_result(num1, num2, op);
}

// Asks the user to confirm before closing the app.
// Returns 1 -> user wants to go back to the main menu (entered 'y')
// Returns 0 -> user wants to close the app (anything else)
int confirmExit() {
    char answer;
    cout << "\nAre you sure you want to close the app? (y = No, go back to menu / any other key = Yes, close): ";
    cin >> answer;
    if (answer == 'y' || answer == 'Y') {
        return 1;
    }
    return 0;
}

int main() {
    cout << fixed << setprecision(2);

    int keepRunning = 1;

    while (keepRunning == 1) {
        initialDisplay();
        int act = askForValue("ENTER ACTIVITY: ");

        switch (act) {
            case 1:
                activity1();
                break;
            case 2:
                activity2();
                break;
            case 3:
                activity3();
                break;
            case 4:
                activity4();
                break;
            case 5:
                activity5();
                break;
            case 6:
                // Exit was chosen: confirm before actually closing.
                if (confirmExit() == 1) {
                    // user entered 'y' -> go back to the beginning of the app
                    continue;
                } else {
                    // user entered anything else -> close the app
                    keepRunning = 0;
                    continue;
                }
            default:
                cout << "\nInvalid choice, please try again.\n";
                break;
        }

        // After running an activity (1-5), also ask whether to return to the menu.
        if (act >= 1 && act <= 5) {
            if (confirmExit() == 0) {
                keepRunning = 0;
            }
        }
    }

    cout << "\nGoodbye!\n";
    return 0;
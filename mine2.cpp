#include <iostream>
#include <math.h>
#include <stdio.h>

#define pi 3.1416

using namespace std;

// Function Prototypes Macro Execution Blocks For Individual Codes
void run_app1(void);
void run_app2(void);
void run_app3(void);
void run_app4(void);

// Secondary Function Callers for Apps 3&4
// App 3 Function Block Here
float input_theta(void);
float input_distance(void);
float input_velocity(void);
float compute_time(float distance, float velocity, float theta_rad);
float compute_height(float velocity, float theta_rad, float time);
void display_results(float theta, float distance, float velocity, float time, float height);

// App 4 Function Block Here
float getValidGrade(char gradeName[]);
float computeclassStanding(float mq1, float mq2, float mq3, float lab1, float lab2, float lab3);
float computeMidtermGrade(float classStanding, float midtermExam);
float convertToPointGrade(float grade);


int  main() {
    int choice;
    char confirm;

main_menu:

    cout << "##################################################\n";
    cout << "#                   MAIN MENU                    #\n";
    cout << "##################################################\n\n";
    cout << " [1] Execute Activity 1: Circle Calculator\n";
    cout << " [2] Execute Activity 2: Yards to Units Converter\n";
    cout << " [3] Execute Activity 3: Projectile Function App\n";
    cout << " [4] Execute Activity 4: Conditional Handling App\n";
    cout << " [5] Close the App\n\n";
    cout << " Enter your choice (1-5): ";
    cin >> choice;

    switch (choice) {
        case 1:
            run_app1();
            goto main_menu;
        case 2:
            run_app2();
            goto main_menu;
        case 3:
            run_app3();
            goto main_menu;
        case 4:
            run_app4();
            goto main_menu;
        case 5:
            cout << "\nDo you really want to close the app? (y/n): ";
            cin >> confirm;
            if (confirm == 'y' || confirm == 'Y') {
                goto main_menu; 
            } else 
{
          
                cout << "\n\n\n";
                cout << "                 ##################                \n";
                cout << "                 #   GOODBYE!     #                \n";
                cout << "                 ##################                \n";
                cout << "\n              Program execution completed.\n";
                cout << "              Press any key to close this window...\n";
            
                return 0; 
            }
        default:
            cout << "Invalid input. Press any key to try again.\n";
        
            goto main_menu;
    }
}

// --- FUNCTION DEFINITIONS: Where the Codes Are ---

void run_app1(void) {
    float r, circumference, area;
;
    cout << "Enter radius of CIRCLE: ";
    cin >> r;
    circumference = 2 * pi * r;
    area = pi * pow(r, 2);
    cout << "\nRadius, Circumference, Area\n";
    printf(" %.2f,  %.2f,  %.2f\n", r, circumference, area);
    cout << "\nPress any key to return to Main Menu...";

}

void run_app2(void) {
    double yards;

    cout << " YARDS TO UNITS CONVERTER\n " << endl;
    cout << "\n Enter The Length In Yards Below: ";
    cin >> yards;
    printf( "\n\nOUTPUTTED CONVERSION RESULTS\n\n" );
    printf( "Inches:      %.2f  in\n", yards*36.0);
    printf( "Feet:        %.2f  ft\n", yards*3.0);
    printf( "Meters:         %.2f  m\n", yards*0.9144);
    printf( "Centimeters:     %.2f  cm\n", yards*91.44);
    printf( "Millimeters:    %.2f  mm\n", yards*914.4);
    printf( "Kilometers:    %.8f  km\n", yards*0.0009144);
    printf( "Miles:        %.8f  mi\n", yards*0.000568182);
    cout << "\n////////////////\n " << endl;
    cout << "\nPress any key to return to Main Menu...";
}

void run_app3(void) {
    float theta, distance, velocity;
    float time, height;
    float Pi = 3.141559265;
    theta = input_theta();
    distance = input_distance();
    velocity = input_velocity();
    theta = theta * (Pi / 180.0);
    time = compute_time(distance, velocity, theta);
    height = compute_height(velocity, theta, time);
    display_results(theta, distance, velocity, time, height);
    cout << "\nPress any key to return to Main Menu...";
}

void run_app4(void) {
    char tryAgain;
    char studentName[50];
start_program:
    cout << "_______________________________\n";
    cout << "        STUDENT GRADE \n";
    cout << "_______________________________\n\n\n";
    cout << "ENTER NAME OF STUDENT: ";
    cin >> ws;
    cin.getline(studentName, 50);


    
    cout << "\nINPUT GRADES HERE\n\n";
    cout << "MidTerm Quizzes\n";
    float mq1 = getValidGrade("Midterm Quiz 1: ");
    float mq2 = getValidGrade("Midterm Quiz 2: ");
    float mq3 = getValidGrade("Midterm Quiz 3: ");


    
    cout << "\n\nLaboratory Activities\n";
    float lab1 = getValidGrade("Lab 1: ");
    float lab2 = getValidGrade("Lab 2: ");
    float lab3 = getValidGrade("Lab 3: ");


    
    cout << "\nExam\n";
    float midtermExam = getValidGrade("Midterm Exam: ");

    float classStanding = computeclassStanding(mq1, mq2, mq3, lab1, lab2, lab3);
    float midtermGrade = computeMidtermGrade(classStanding, midtermExam);
    float pointGrade = convertToPointGrade(midtermGrade);

    cout << "\n_______________________________________________\n";
    cout << "\nSUMMARY OF GRADES\n";
    cout << "_______________________________________________\n";
    cout << "Student Name  :        " << studentName << "\n";
    printf("Midterm Grade    :      %.2f%%\n", midtermGrade);
    printf("Midterm Point Grade : %.2f\n", pointGrade);

    if (pointGrade <= 3.00){
        cout << "Remark   :            PASSED\n";
    } else {
        cout << "Remark   :            FAILED\n";
    }


    
    cout << "_______________________________________________\n";
    cout << "THANKS FOR USING THE APP\n";
    cout << "\nDO YOU WANT TO TRY AGAIN? (y/n): ";
    cin >> tryAgain;

    if (tryAgain == 'y' || tryAgain == 'Y'){
        goto start_program;
    }
}

// --- App 3 Helper Definitions ---
float input_theta() {
    float theta;
    cout << "Enter Angle (DEGREES): ";
    cin >> theta;
    return theta;
}

float input_distance() {
    float distance;
    cout << "Enter Distance (feet): ";
    cin >> distance;
    return distance;
}

float input_velocity() {
    float velocity;
    cout << "Enter Starting Velocity (FPS): ";
    cin >> velocity;
    return velocity;
}

float compute_time(float distance, float velocity, float theta_rad) {
    return distance / (velocity * cos(theta_rad));
}

float compute_height(float velocity, float theta_rad, float time) {
    float G = 32.17;
    return (velocity * sin(theta_rad) * time) - ((G * time * time) / 2.0);
}

void display_results(float theta, float distance, float velocity, float time, float height) {
    printf("\nDATA INPUTTED\n");
    printf("ANGLE:              %.2f degrees\n", theta * (180/3.14159265));
    printf("DISTANCE TO TARGET:    %.2f feet\n", distance);
    printf("STARTING VELOCITY:    %.2f fps\n", velocity);
    printf("\n\nDATA COMPUTED\n");
    printf("ANGLE (RADIANS):    %.2f rad\n", theta);
    printf("TIME OF FLIGHT:        %.2f seconds\n", time);
    printf("Height Above Target:    %.2f feet\n\n", height);
}

// --- App 4 Helper Definitions ---
float getValidGrade(const char* gradeName[]) {
    float grade;
input_grade:
    cout << "Enter " << gradeName << "(60-100): ";
    cin >> grade;
    if (grade < 60 || grade > 100){
        cout << "Invalid input! Grade must be from 60 to 100.\n";
        goto input_grade;
    }
    return grade;
}

float computeclassStanding(float mq1, float mq2, float mq3, float lab1, float lab2, float lab3) {
    float avgMQ = (mq1 + mq2 + mq3) / 3.0;
    float avgLab = (lab1 + lab2 + lab3) / 3.0;
    return (2.0 / 3.0) * avgMQ + (1.0 / 3.0) * avgLab;
}

float computeMidtermGrade(float classStanding, float midtermExam) {
    return (2.0 / 3.0) * classStanding + (1.0 / 3.0) * midtermExam;
}

float convertToPointGrade(float grade) {
    if (grade >= 98) return 1.00;
    else if (grade >= 95) return 1.25;
    else if (grade >= 92) return 1.50;
    else if (grade >= 89) return 1.75;
    else if (grade >= 86) return 2.00;
    else if (grade >= 83) return 2.25;
    else if (grade >= 80) return 2.50;
    else if (grade >= 77) return 2.75;
    else if (grade >= 75) return 3.00;
    else if (grade >= 72) return 4.00;
    else return 5.00;
}
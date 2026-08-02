#include <iostream.hh>
#include <math.h>
#include <stdio.h>
#include <conio.h>

void initial_display () {
    cout << "---WELCOME TO GRADE CALCULATOR---" << "\n";
    cout << "Format for inputing grades: Score THEN Total Score" << "\n";
    cout << "SINGLE NAME ONLY" << "\n\n";
}

void ask_for_name (char* name) {
    cout << "Enter name of student: ";
    cin >> name;
}

float ask_for_m1 () {
    float m1;
    cout << "Score Midterm Quiz 1: ";
    cin >> m1;
    return m1;
}

float ask_for_m1_total () {
    float m1_total;
    cout << "Total Midterm Quiz 1: ";
    cin >> m1_total;
    return m1_total;
}

float ask_for_m2 () {
    float m2;
    cout << "Score Midterm Quiz 2: ";
    cin >> m2;
    return m2;
}

float ask_for_m2_total () {
    float m2_total;
    cout << "Total Midterm Quiz 2: ";
    cin >> m2_total;
    return m2_total;
}

float ask_for_m3 () {
    float m3;
    cout << "Score Midterm Quiz 3: ";
    cin >> m3;
    return m3;
}

float ask_for_m3_total () {
    float m3_total;
    cout << "Total Midterm Quiz 3: ";
    cin >> m3_total;
    return m3_total;
}

float ask_for_lab1 () {
    float lab1;
    cout << "Score lab 1: ";
    cin >> lab1;
    return lab1;
}

float ask_for_lab1_total () {
    float lab1_total;
    cout << "Total lab 1: ";
    cin >> lab1_total;
    return lab1_total;
}

float ask_for_lab2 () {
    float lab2;
    cout << "Score lab 2: ";
    cin >> lab2;
    return lab2;
}

float ask_for_lab2_total () {
    float lab2_total;
    cout << "Total lab 2: ";
    cin >> lab2_total;
    return lab2_total;
}

float ask_for_lab3 () {
    float lab3;
    cout << "Score lab 3: ";
    cin >> lab3;
    return lab3;
}

float ask_for_lab3_total () {
    float lab3_total;
    cout << "Total lab 3: ";
    cin >> lab3_total;
    return lab3_total;
}

float ask_for_exam () {
    float exam;
    cout << "Score Exam: ";
    cin >> exam;
    return exam;
}

float ask_for_exam_total () {
    float exam_total;
    cout << "Total Exam Score: ";
    cin >> exam_total;
    return exam_total;
}

// get average
float get_quiz_average (float m1,float m1_total, float m2, float m2_total, float m3, float m3_total) {
    float q1 = (m1 / m1_total) * 100;
    float q2 = (m2 / m2_total) * 100;
    float q3 = (m3 / m3_total) * 100;
    float quiz_average = (q1 + q2 + q3) / 3.0;
    return quiz_average;
}

float get_lab_average (float lab1, float lab1_total, float lab2, float lab2_total, float lab3, float lab3_total) {
    float l1 = (lab1 / lab1_total) * 100;
    float l2 = (lab2 / lab2_total) * 100;
    float l3 = (lab3 / lab3_total) * 100;
    float lab_average = (l1 + l2 + l3) / 3.0;
    return lab_average;
}

//logic of both average
float get_logic (float quiz_average, float exam, float lab_average, float exam_total) {
    float exam_percentage = (exam / exam_total) * 100;
    float final_percentage = (quiz_average + exam_percentage + lab_average) / 3;
    return final_percentage;
}

int check_initial (float final_percentage, float x) {
x = 1;
    if (final_percentage <= 60.00) {
    x = 1;
} else if (final_percentage > 100.00) {
    cout << "ERROR: GRADE TOO HIGH\n";
    x = 0;
}
return x;
}

float get_standing (float quiz_average, float lab_average) {
    float standing = ((2.0 / 3.0) * quiz_average) + ((1.0 / 3.0) * lab_average);
    return standing;

}
float get_grade (float standing, float exam, float exam_total) {
    float exam_percentage = (exam / exam_total) * 100;
    float grade = (standing * (2.0 / 3.0)) + (exam_percentage * (1.0 / 3.0));
    return grade;
}

void get_gpa (float grade, char* name) {
    if (grade >= 98) {
	cout << "---PASSED---\n";
	cout << "Name: " << name << "\n";
	cout << "Grade (Point Scale): 1.00 \n";
	cout << "Grade (Percentage): " << grade << "\n";
    } else if (grade >=95) {
	cout << "---PASSED---\n";
	cout << "Name: " << name << "\n";
	cout << "Grade(Point Scale): 1.25 \n";
	cout << "Grade(Percentage): " << grade << "\n";
    } else if (grade >=92) {
	cout << "---PASSED---\n";
	cout << "Name: " << name << "\n";
	cout << "Grade(Point Scale): 1.50 \n";
	cout << "Grade(Percentage): " << grade << "\n";
    } else if (grade >= 89) {
	cout << "---PASSED---\n";
	cout << "Name: " << name << "\n";
	cout << "Grade(Point Scale): 1.75 \n";
	cout << "Grade(Percentage): " << grade << "\n";
    } else if (grade >= 86) {
	cout << "---PASSED---\n";
	cout << "Name: " << name << "\n";
	cout << "Grade(Point Scale): 2.00 \n";
	cout << "Grade(Percentage): " << grade << "\n";
    } else if (grade >= 83) {
	cout << "---PASSED---\n";
	cout << "Name: " << name << "\n";
	cout << "Grade(Point Scale): 2.25 \n";
	cout << "Grade(Percentage): " << grade << "\n";
    } else if (grade >= 80) {
	cout << "---PASSED---\n";
	cout << "Name: " << name << "\n";
	cout << "Grade(Point Scale): 2.50 \n";
	cout << "Grade(Percentage): " << grade << "\n";
    } else if (grade >= 77) {
	cout << "---PASSED---\n";
	cout << "Name: " << name << "\n";
	cout << "Grade(Point Scale): 2.75 \n";
	cout << "Grade(Percentage): " << grade << "\n";
    } else if (grade >= 75) {
	cout << "---PASSED---\n";
	cout << "Name: " << name << "\n";
	cout << "Grade(Point Scale): 3.00 \n";
	cout << "Grade(Percentage): " << grade << "\n";
    } else if (grade >= 72) {
	cout << "---FAILED---\n";
	cout << "Name: " << name << "\n";
	cout << "Grade(Point Scale): 4.00 \n";
	cout << "Grade(Percentage): " << grade << "\n";
    } else {
	cout << "---FAILED---\n";
	cout << "Name: " << name << "\n";
	cout << "Remark: 5.00 \n";
	cout << "Grade(Percentage):" << grade << "\n";
    }
}

char ask_again () {
    char ans;
    cout << "\n\nTry Again? (y/n): ";
    cin >> ans;
    return ans;
}

int main () {
clrscr ();
    char name[67];
    float m1, m1_total, m2, m2_total, m3, m3_total, lab1, lab1_total, lab2, lab2_total, lab3, lab3_total, exam;
    float exam_total, quiz_average, lab_average, final_percentage, x;
    char ans;

    start:
    initial_display ();
    ask_for_name(name);
    m1 = ask_for_m1();
    m1_total = ask_for_m1_total ();
    m2 = ask_for_m2();
    m2_total = ask_for_m2_total ();
    m3 = ask_for_m3();
    m3_total = ask_for_m3_total ();
    lab1 = ask_for_lab1();
    lab1_total = ask_for_lab1_total ();
    lab2 = ask_for_lab2();
    lab2_total = ask_for_lab2_total ();
    lab3 = ask_for_lab3();
    lab3_total = ask_for_lab3_total ();
    exam = ask_for_exam();
    exam_total = ask_for_exam_total();

    quiz_average = get_quiz_average(m1, m1_total, m2, m2_total, m3, m3_total);
    lab_average = get_lab_average(lab1, lab1_total, lab2, lab2_total, lab3, lab3_total);
    final_percentage = get_logic(quiz_average, exam, lab_average, exam_total);


    x = check_initial(final_percentage, x);
    if (x == 1) {
	float standing = get_standing (quiz_average, lab_average);
	float grade = get_grade (standing, exam, exam_total);
	get_gpa (grade, name);
    }

    ans = ask_again ();
    if (ans == 'y' || ans == 'Y') {
	goto start;
    } else {
	cout << "Thank you for using the app :)";
    }

  getch();
  return 0;
}

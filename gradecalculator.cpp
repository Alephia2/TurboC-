#include <iostream.h>
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

// get summation
float get_summation_quiz (float m1, float m2, float m3) {
    float summation_quiz = m1 + m2 + m3;
    return summation_quiz;
}

float get_summation_lab (float lab1, float lab2, float lab3) {
    float summation_lab = lab1 + lab2 + lab3;
    return summation_lab;
}

float get_both_summation (float summation_quiz, float summation_lab) {
    float summation_both = summation_quiz +summation_lab;
    return summation_both;
}

//summation of total
float get_summation_quiz_total (float m1_total, float m2_total, float m3_total) {
    float summation_quiz_total = m1_total + m2_total + m3_total;
    return summation_quiz_total;
}

float get_summation_lab_total (float lab1_total, float lab2_total, float lab3_total) {
    float summation_lab_total = lab1_total + lab2_total + lab3_total;
    return summation_lab_total;
}

float get_both_summation_total (float summation_quiz_total, float summation_lab_total) {
    float summation_both_total = summation_quiz_total + summation_lab_total;
    return summation_both_total;
}

//logic of both summations
float get_logic (float summation_both, float exam, float summation_both_total, float exam_total) {
    float final_percentage = (summation_both + exam) / (summation_both_total + exam_total);
    return final_percentage;
}

int check_initial (float final_percentage, float x) {
x = 1;
    if (final_percentage <= 0.6) {
    x = 1;
} else if (final_percentage > 1.0) {
    cout << "ERROR: GRADE TOO HIGH\n";
    x = 0;
}
return x;
}

float get_standing (float summation_quiz, float summation_quiz_total, float summation_lab, float summation_lab_total) {
    float standing = (0.67 * (summation_quiz / summation_quiz_total * 100)) + (0.33 * (summation_lab / summation_lab_total * 100));
    return standing;
}

float get_grade (float standing, float exam, float exam_total) {
    float grade = (standing  * 0.67) + ((exam / exam_total * 100) * 0.33);
    return grade;
}

void get_gpa (float grade, char* name) {
    if (grade >= 98) {
	cout << "---PASSED---\n";
	cout << "Name: " << name << "\n";
	cout << "Remark: 1.00 \n";
	cout << "Grade: " << grade << "\n";
    } else if (grade >=95) {
	cout << "---PASSED---\n";
	cout << "Name: " << name << "\n";
	cout << "Remark: 1.25 \n";
	cout << "Grade: " << grade << "\n";
    } else if (grade >=92) {
	cout << "---PASSED---\n";
	cout << "Name: " << name << "\n";
	cout << "Remark: 1.50 \n";
	cout << "Grade: " << grade << "\n";
    } else if (grade >= 89) {
	cout << "---PASSED---\n";
	cout << "Name: " << name << "\n";
	cout << "Remark: 1.75 \n";
	cout << "Grade: " << grade << "\n";
    } else if (grade >= 85) {
	cout << "---PASSED---\n";
	cout << "Name: " << name << "\n";
	cout << "Remark: 2.00 \n";
	cout << "Grade: " << grade << "\n";
    } else if (grade >= 83) {
	cout << "---PASSED---\n";
	cout << "Name: " << name << "\n";
	cout << "Remark: 2.25 \n";
	cout << "Grade: " << grade << "\n";
    } else if (grade >= 80) {
	cout << "---PASSED---\n";
	cout << "Name: " << name << "\n";
	cout << "Remark: 2.50 \n";
	cout << "Grade: " << grade << "\n";
    } else if (grade >= 77) {
	cout << "---PASSED---\n";
	cout << "Name: " << name << "\n";
	cout << "Remark: 2.75 \n";
	cout << "Grade: " << grade << "\n";
    } else if (grade >= 75) {
	cout << "---FAILED---\n";
	cout << "Name: " << name << "\n";
	cout << "Remark: 3.00 \n";
	cout << "Grade: " << grade << "\n";
    } else if (grade >= 72) {
	cout << "---FAILED---\n";
	cout << "Name: " << name << "\n";
	cout << "Remark: 4.00 \n";
	cout << "Grade: " << grade << "\n";
    } else {
	cout << "---FAILED---\n";
	cout << "Name: " << name << "\n";
	cout << "Remark: 5.00 \n";
	cout << "Grade:" << grade << "\n";
    }
}

char ask_again () {
    char ans;
    cout << "\n\nTry Again? (y/n): ";
    cin >> ans;
    return ans;
}

int main () {
clrscr();
    char name[67];
    float m1, m1_total, m2, m2_total, m3, m3_total, lab1, lab1_total, lab2, lab2_total, lab3, lab3_total, exam, exam_total;
    float summation_quiz, summation_lab, summation_both, summation_quiz_total, summation_lab_total, summation_both_total, final_percentage, x;
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

    summation_quiz = get_summation_quiz(m1, m2, m3);
    summation_lab = get_summation_lab(lab1, lab2, lab3);
    summation_both = get_both_summation(summation_quiz, summation_lab);
    summation_quiz_total = get_summation_quiz_total (m1_total, m2_total, m3_total);
    summation_lab_total = get_summation_lab_total (lab1_total, lab2_total, lab3_total);
    summation_both_total = get_both_summation_total (summation_quiz_total, summation_lab_total);
    final_percentage = get_logic(summation_both, exam, summation_both_total, exam_total);

    x = check_initial(final_percentage, x);
    if (x == 1) {
	float standing = get_standing (summation_quiz, summation_quiz_total, summation_lab, summation_lab_total);
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

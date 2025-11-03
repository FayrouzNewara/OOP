#include <iostream>
#include"Student.h"
#include"Teacher.h"
#include"Staff.h"
#include"Course.h"
#include"Classroom.h"
#include"School.h"
#include"Exam.h"
using namespace std;
int main()
{
    Student s;
    s.input("Sara", 20, "Fmale", "Zag", "01238574634", "Sara@gmail.com", 120, "Scond", 3.5);
    Student s2("Ahmed", 22, "Male", "Alex", "01138762435", "Ahmed@gmail.com", 121, "First", 3);
    Teacher t("Amir", 33, "Male", "Cairo", "01025389421", "Amir@gmail.com", 110, "Network", 10000);
    Teacher t2("Hajir", 27, "Fmale", "Giza", "01178293465", "Hajir@gmail.com", 111, "OOP", 20000);
    Staff S("Nade", 36, "Fmale", "Zag", "01098374621", "Nade@gmail.com", 100, "Assistent", 5000);
    Course c;
    c.input("CS200", "Data Structure", "Nader");
    Course c2("CS203", "AI", "Doaa");
    Classroom C(4, 250);
    Classroom C2;
    C2.input(18, 50);
    Exam e("Data Structure", "CS200", "28/12");
    Exam e2("AI", "CS203", "22/6");
    vector<Student>students = { s,s2 };
    vector<Teacher> teachers = { t , t2 };
    vector<Staff> staffmembers= {S};
    vector<Course>courses = { c,c2 };
    vector<Classroom> classrooms = { C,C2 };
    vector<Exam> exams = { e,e2 };
    School Sc("Zag School", "Zagazig", "Dr.Aml", students, teachers, staffmembers, courses, classrooms,exams);
    Sc.print();

    return 0;
}


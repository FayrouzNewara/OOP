#include "School.h"
#include <iostream>
#include<vector>
#include<string>
#include"Student.h"
#include"Teacher.h"
#include"Staff.h"
#include"Course.h"
#include"Classroom.h"
using namespace std;
School::School(){}
School::School(string schoolName, string address, string prprincipleName, vector<Student> students,
	vector<Teacher> teachers, vector<Staff> staffMembers,
	vector<Course> courses, vector<Classroom> classrooms, vector<Exam>exams)
{
	this->schoolName = schoolName;
	this->address = address;
	this->principleName = prprincipleName;
	this->students = students;
	this->teachers = teachers;
	this->staffMembers = staffMembers;
	this->courses = courses;
	this->classrooms = classrooms;
	this->exams = exams;
}
void School::setSchoolName(string schoolName)
{
	this->schoolName = schoolName;
}
void School::setAddress(string address)
{
	this->address = address;
}
void School::setPrincipleName(string principleName)
{
	this->principleName = principleName;
}
void School::setStudents(vector<Student> students) 
{
	this->students = students;
}
void School::setTeachers(vector<Teacher> taechers)
{
	this->teachers = teachers;
}
void School::setStaffMembers(vector<Staff> staffMembers)
{
	this->staffMembers = staffMembers;
}
void School::setCourses(vector<Course> courses)
{
	this->courses = courses;
}
void School::setCalssroom(vector<Classroom> classrooms)
{
	this->classrooms = classrooms;
}
void School::setExam(vector<Exam>exams)
{
	this->exams = exams;
}
string School::getSchoolName()
{
	return schoolName;
}
string School::getAddress()
{
	return address;
}
string School::getPrincipleName()
{
	return principleName;
}
vector<Student> School::getStudents()
{
	return students;
}
vector<Teacher> School::getTeachers()
{
	return teachers;
}
vector<Staff> School::getStaffMembers()
{
	return staffMembers;
}
vector<Course> School::getCourses()
{
	return courses;
}
vector<Classroom> School::getClassrooms()
{
	return classrooms;
}
vector<Exam> School::getExams()
{
	return exams;
}
void School::print() const
{
	cout << "School Name Is : " << schoolName << endl;
	cout << "Address Is : " << address << endl;
	cout << "Principle Name Is : " << principleName << endl;
	cout << "\t--- Students ---\n";
	for (int i = 0; i < students.size(); i++)
	{
		students[i].print();
		cout << "===================================\n";
	}

	cout << "\t--- Teachers ---\n";
	for (int i = 0; i < teachers.size(); i++)
	{
		teachers[i].print();
		cout << "===================================\n";
	}

	cout << "\t--- Staff Members ---\n";
	for (int i = 0; i < staffMembers.size(); i++)
	{
		staffMembers[i].print();
		cout << "===================================\n";
	}

	cout << "\t--- Courses ---\n";
	for (int i = 0; i < courses.size(); i++)
	{
		courses[i].print();
		cout << "===================================\n";
	}

	cout << "\t--- Class Room  ---\n";
	for (int i = 0; i < classrooms.size(); i++)
	{
		classrooms[i].print();
		cout << "===================================\n";
	}

	cout << "\t--- Exam ---\n";
	for (int i = 0 ; i < exams.size() ;i++)
	{
		exams[i].print();
		cout << "===================================\n";
	}

}
void School::input(string schoolName, string address, string prprincipleName, vector<Student> students,
	vector<Teacher> teachers, vector<Staff> staffMembers,
	vector<Course> courses, vector<Classroom> classrooms ,vector<Exam>exams)
{
	this->schoolName = schoolName;
	this->address = address;
	this->principleName = prprincipleName;
	this->students = students;
	this->teachers = teachers;
	this->staffMembers = staffMembers;
	this->courses = courses;
	this->classrooms = classrooms;
	this->exams = exams;
}
School::~School(){ }
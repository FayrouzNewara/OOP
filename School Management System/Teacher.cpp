#include "Teacher.h"
#include"Person.h"
#include <iostream>
using namespace std;
Teacher::Teacher(){}
Teacher::Teacher(string name, int age, string gender, string address, string phoneNumber, string email,
	int teacherID, string subjectSpecialization, float salary):Person(name, age, gender, address, phoneNumber, email)
{
	this->teacherID = teacherID;
	this->subjectSpecialization = subjectSpecialization;
	this->salary = salary;
}
void Teacher::setTeacherID(int teacherID)
{
	this->teacherID= teacherID;
}
void Teacher::setSubjectSpecialization(string subjectSpecialization)
{
	this->subjectSpecialization = subjectSpecialization;
}
void Teacher::setSalary(float salary)
{
	this->salary = salary;
}
int Teacher::getTeacherID()
{
	return teacherID;
}
string Teacher::getSubjectSpecialization()
{
	return subjectSpecialization;
}
float Teacher::getSalary()
{
	return salary;
}
void Teacher::print() const
{
	Person::print();
	cout << "Teacher Id Is : " << teacherID << endl;
	cout << "Subject SpecializationIs : " << subjectSpecialization<< endl;
	cout << "Salary Is : " << salary << endl;
}
void Teacher::input(string name, int age, string gender, string address, string phoneNumber, string email,
	int teacherId, string subjectSpecialization, float salary)
{
	Person::input(name, age, gender, address, phoneNumber, email);
	this->teacherID = teacherID;
	this->subjectSpecialization = subjectSpecialization;
	this->salary = salary;
}
Teacher::~Teacher(){}
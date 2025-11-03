#include "Course.h"
#include <iostream>
using namespace std;
Course::Course(){}
Course::Course(string courseCode, string courseName, string teacherName)
{
	this->courseCode = courseCode;
	this->courseName = courseName;
	this->teacherName = teacherName;
}
void Course::setCourseCode(string courseCode)
{
	this->courseCode = courseCode;
}
void Course::setCourseName(string courseName)
{
	this->courseName = courseName;
}
void Course::setTeacherName(string teacheName)
{
	this->teacherName = teacherName;
}
string Course::getCourseCode()
{
	return courseCode;
}
string Course::getCourseName()
{
	return courseName;
}
string Course::getTeacherName()
{
	return teacherName;
}
void Course::print() const
{
	cout << "Course Code Is : " << courseCode << endl;
	cout << "Course Name Is : " << courseName << endl;
	cout << "Teacher Name Is : " << teacherName << endl;
}
void Course::input(string courseCode, string courseName, string teacherName)
{
	this->courseCode = courseCode;
	this->courseName = courseName;
	this->teacherName = teacherName;
}
Course::~Course(){}
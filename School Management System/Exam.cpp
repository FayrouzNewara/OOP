#include "Exam.h"
#include <iostream>
using namespace std;
Exam::Exam(){}
Exam::Exam(string examName, string courseCode, string examData)
{
	this->examName = examName;
	this->courseCode = courseCode;
	this->examData = examData;
}
void Exam::setExamName(string examName)
{
	this->examName = examName;
}
void Exam::setCourseCode(string courseCode)
{
	this->courseCode = courseCode;
}
void Exam::setExamDate(string examData)
{
	this->examData = examData;
}
string Exam::getExamName()
{
	return examName;
}
string Exam::getCourseCode()
{
	return courseCode;
}
string Exam::getExamDate()
{
	return examData;
}
void Exam::print() const
{
	cout << "Exam Name Is : " << examName << endl;
	cout << "Course Code Is : " << courseCode << endl;
	cout << "Exam Data Is : " << examData << endl;
}
void Exam::input(string examName, string courseCode, string examData)
{
	this->examName = examName;
	this->courseCode = courseCode;
	this->examData = examData;
}
Exam::~Exam(){}
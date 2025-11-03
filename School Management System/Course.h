#pragma once
#include <iostream>
using namespace std;
class Course
{
private:
	string courseCode;
	string courseName;
	string teacherName;
public:
	Course();
	Course(string courseCode, string courseName, string teacherName);
	void setCourseCode(string courseCode);
	void setCourseName(string courseName);
	void setTeacherName(string teacheName);
	string getCourseCode();
	string getCourseName();
	string getTeacherName();
	void print() const;
	void input(string courseCode, string courseName, string teacherName);
	~Course();
};


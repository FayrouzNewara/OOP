#pragma once
#include <iostream>
using namespace std;
class Exam
{
private:
	string examName;
	string courseCode;
	string examData;
public:
	Exam();
	Exam(string examName, string courseCode, string examData);
	void setExamName(string examName);
	void setCourseCode(string courseCode);
	void setExamDate(string examData);
	string getExamName();
	string getCourseCode();
	string getExamDate();
	void print() const;
	void input(string examName, string courseCode, string examData);
	~Exam();
};


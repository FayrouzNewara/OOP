#pragma once
#include <iostream>
#include<vector>
#include<string>
#include"Student.h"
#include"Teacher.h"
#include"Staff.h"
#include"Course.h"
#include"Classroom.h"
#include"Exam.h"
using namespace std;
class School
{
private:
	string schoolName;
	string address;
	string principleName;
	vector<Student> students;
	vector<Teacher> teachers;
	vector<Staff> staffMembers;
	vector<Course> courses;
	vector<Classroom> classrooms;
	vector<Exam>exams;
public:
	School();
	School(string schoolName, string address, string prprincipleName, vector<Student> students,
		vector<Teacher> teachers, vector<Staff> staffMembers,
		vector<Course> courses, vector<Classroom> classrooms ,vector<Exam>exams); 
	void setSchoolName(string schoolName);
	void setAddress(string address);
	void setPrincipleName(string principleName);
	void setStudents(vector<Student> students);
	void setTeachers(vector<Teacher> taechers);
	void setStaffMembers(vector<Staff> staffMembers);
	void setCourses(vector<Course> courses);
	void setCalssroom(vector<Classroom> classrooms);
	void setExam(vector<Exam>exams);
	string getSchoolName();
	string getAddress();
	string getPrincipleName();
	vector<Student> getStudents();
	vector<Teacher> getTeachers();
	vector<Staff> getStaffMembers();
	vector<Course> getCourses(); 
	vector<Classroom> getClassrooms();
	vector<Exam> getExams();
	void print() const;
	void input(string schoolName, string address, string prprincipleName, vector<Student> students,
		vector<Teacher> teachers, vector<Staff> staffMembers,
		vector<Course> courses, vector<Classroom> classrooms , vector<Exam>exams);
	~School();
};


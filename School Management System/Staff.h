#pragma once
#include"Person.h"
#include <iostream>
using namespace std;
class Staff:public Person
{
private:
	int staffID;
	string role; 
	float salary;
public:
	Staff();
	Staff(string name, int age, string gender, string address, string phoneNumber, string email,
		int staffID, string role, float salary);
	void setStaffID(int staffID);
	void setRole(string role);
	void setSalary(float salary);
	int getStaffID();
	string getRole();
	float getSalary();
	void print() const;
	void input(string name, int age, string gender, string address, string phoneNumber, string email,
		int staffID, string role, float salary);
	~Staff();
};


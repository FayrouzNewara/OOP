#include "Staff.h"
#include"Person.h"
#include <iostream>
using namespace std;
Staff::Staff(){}
Staff::Staff(string name, int age, string gender, string address, string phoneNumber, string email,
	int staffID, string role, float salary):Person(name, age, gender, address, phoneNumber, email)
{
	this->staffID = staffID;
	this->role = role;
	this->salary = salary;
}
void Staff::setStaffID(int staffID)
{
	this->staffID = staffID;
}
void Staff::setRole(string role)
{
	this->role = role;
}
void Staff::setSalary(float salary)
{
	this->salary = salary;
}
int Staff::getStaffID()
{
	return staffID;
}
string Staff::getRole()
{
	return role;
}
float Staff::getSalary()
{
	return salary;
}
void Staff::print() const
{
	Person::print();
	cout << "Staff ID Is : " << staffID << endl;
	cout << "Role Is : " << role << endl;
	cout << "Salary Is : " << salary << endl;
}
void Staff::input(string name, int age, string gender, string address, string phoneNumber, string email,
	int staffID, string role, float salary)
{
	Person::input(name, age, gender, address, phoneNumber, email);
	this->staffID = staffID;
	this->role = role;
	this->salary = salary;
}
Staff::~Staff(){}
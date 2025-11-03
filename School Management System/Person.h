#pragma once
#include <iostream>
using namespace std;
class Person
{
private:
	string name;
	int age;
	string gender;
	string address;
	string phoneNumber;
	string email;
public:
	Person();
	Person(string name , int age , string gender , string address , string phoneNumber , string email);
	void setName(string name);
	void setAge(int age);
	void setGender(string gender);
	void setAddress(string address);
	void setPhoneNumber(string setPhoneNumber);
	void setEmail(string email);
	string getName();
	int getAge();
	string getGender();
	string getAddress();
	string getPhoneNumber();
	string getEmail();
	void print() const ; 
	void input(string name, int age, string gender, string address, string phoneNumber, string email);
	~Person();
};



#include "Classroom.h"
#include <iostream>
using namespace std;
Classroom::Classroom(){}
Classroom::Classroom(int roomNumber, int capacity)
{
	this->roomNumber = roomNumber;
	this->capacity = capacity;
}
void Classroom::setRoomNumber(int roomNumber)
{
	this->roomNumber = roomNumber;
}
void Classroom::setCapacity(int capacity)
{
	this->capacity = capacity;
}
int Classroom::getRoomNumber()
{
	return roomNumber;
}
int Classroom::getCapacity()
{
	return capacity;
}
void Classroom::print() const
{
	cout << "Room Number Is : " << roomNumber << endl;
	cout << "Capacity Is : " << capacity << endl;
}
void Classroom::input(int roomNumber, int capacity)
{
	this->roomNumber = roomNumber; 
	this->capacity = capacity; 
}
Classroom::~Classroom(){}

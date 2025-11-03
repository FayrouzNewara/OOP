#pragma once
#include <iostream>
using namespace std;
class Classroom
{
private:
	int roomNumber;
	int capacity;
public:
	Classroom();
	Classroom(int roomNumber, int capacity);
	void setRoomNumber(int roomNumber);
	void setCapacity(int capacity);
	int getRoomNumber();
	int getCapacity();
	void print() const;
	void input(int roomNumber, int capacity);
	~Classroom();
};


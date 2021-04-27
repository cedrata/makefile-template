#pragma once

#include <string>

class Student
{
private:
	int age;
	std::string name;

public:
	// Constructor & Destructor
	// Student(int age, std::string name); 
	Student();
    ~Student();

	// set methods
	void setAge(int age);
	void setName(std::string name);

	// get methods
	int getAge();
	std::string getName();
};
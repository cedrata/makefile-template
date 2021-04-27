#include "../include/Student.hpp"
#include <string>

// Constructor with parameters
// Student::Student(int age, std::string name)
// {
// 	this->age = age;
// 	this->name = name;
// }
// Constructor with default values
Student::Student()
:age{20},name{"Luca"}
{}

// Destructor
Student::~Student(){};

// Setters
void Student::setAge(int age)
{
	this->age = age;
	return;
}

void Student::setName(std::string name)
{
	this->name = name;
	return;
}

// Getters
int Student::getAge()
{
	return age;
}

std::string Student::getName()
{
	return name;
}
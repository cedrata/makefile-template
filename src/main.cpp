#include <iostream>
#include <list>

#include "../include/Student.hpp"

int main(void)
{
    // print an integer list
    std::list<int> l = {2, 5, 6, 7};
    
    std::cout << "l = {"; 
    for (int i: l) {
	    std::cout << i << ", ";
    }
    std::cout << "}" << std::endl; 

    // print an object list
    std::list<Student> students;
    std::list<Student>::iterator it;
    
    // Student one
    // Student a = {20, "Luca"};
    Student a;
    students.push_front(a);

    // Using setters
    a.setAge(20);
    a.setName("Pela");

    students.push_back(a);

    for (Student student: students) {
        std::cout << student.getName() << " -> " << student.getAge() << std::endl;
    }

    return EXIT_SUCCESS;
}


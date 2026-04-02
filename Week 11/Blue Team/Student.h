#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <iostream>

namespace School {

class Student {
private:
    std::string name;
    int id;
    static int studentCount;

public:
    // Constructors
    Student();
    Student(const std::string& name, int id);

    // Accessors
    std::string getName() const;
    int getId() const;

    // Print
    void print() const;

    // Operator overload
    bool operator<(const Student& other) const;

    // Static
    static int getCount();
};

}

#endif
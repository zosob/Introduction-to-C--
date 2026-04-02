#include "Student.h"

namespace School {

int Student::studentCount = 0;

// Default constructor
Student::Student() : name("Unknown"), id(0) {
    studentCount++;
}

// Overloaded constructor with validation
Student::Student(const std::string& name, int id) {
    if (name.empty()) {
        this->name = "Invalid";
    } else {
        this->name = name;
    }

    if (id < 0) {
        this->id = 0;
    } else {
        this->id = id;
    }

    studentCount++;
}

// Accessors
std::string Student::getName() const {
    return name;
}

int Student::getId() const {
    return id;
}

// Print
void Student::print() const {
    std::cout << "Student: " << name << " (ID: " << id << ")";
}

// Operator <
bool Student::operator<(const Student& other) const {
    return this->id < other.id;
}

// Static
int Student::getCount() {
    return studentCount;
}

}
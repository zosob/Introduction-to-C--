#include "Course.h"
#include <iostream>

using namespace School;

int main() {

    Course c("CSCI 200");

    Student s1("Alice", 101);
    Student s2("Bob", 102);

    c.addStudent(s1);
    c.addStudent(s2);

    c.addScore(0, 90);
    c.addScore(1, 85);

    // Try some invalid operations
    c.addScore(5, 100);   // invalid index
    c.addScore(0, -10);   // negative score

    c.printAll();

    return 0;
}
#include "ExploitCourse.h"
#include "HackerStudent.h"
#include <iostream>

using namespace School;

void ExploitCourse::runAttacks(Course& course) {

    std::cout << "\n=== Running Exploits ===\n";

    // Attack 1: Add invalid student
    std::cout << "\n[Attack 1] Invalid Student\n";
    course.addStudent(HackerStudent::createInvalidStudent());

    // Attack 2: Duplicate student
    std::cout << "\n[Attack 2] Duplicate Student\n";
    course.addStudent(HackerStudent::createDuplicateStudent());

    // Attack 3: Negative score
    std::cout << "\n[Attack 3] Negative Score\n";
    course.addScore(0, HackerStudent::getNegativeScore());

    // Attack 4: Invalid index
    std::cout << "\n[Attack 4] Invalid Index\n";
    course.addScore(HackerStudent::getBadIndex(), 100);

    // Attack 5: Early average call
    std::cout << "\n[Attack 5] Early Average Access\n";
    course.getAverage(HackerStudent::getBadIndex());
}
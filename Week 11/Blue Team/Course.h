#ifndef COURSE_H
#define COURSE_H

#include <vector>
#include <string>
#include "Student.h"

namespace School {

class Course {
private:
    std::string courseName;
    std::vector<Student> students;
    std::vector<int> scores;

    double computeAverage(int index) const;

    bool isDuplicateId(int id) const;

public:
    Course();
    Course(const std::string& name);

    void addStudent(const Student& s);
    void addScore(int index, int score);
    double getAverage(int index) const;
    void printAll() const;
};

}

#endif
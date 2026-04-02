#ifndef HACKERSTUDENT_H
#define HACKERSTUDENT_H

#include "Student.h"

class HackerStudent {
public:
    static School::Student createInvalidStudent();
    static School::Student createDuplicateStudent();
    static int getNegativeScore();
    static int getBadIndex();
};

#endif
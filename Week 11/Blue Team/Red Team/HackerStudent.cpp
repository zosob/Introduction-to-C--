#include "HackerStudent.h"

Student HackerStudent::emptyName() {
    return Student("", 999);
}

Student HackerStudent::negativeId() {
    return Student("Ghost", -1);
}

Student HackerStudent::duplicateOf(const Student& s) {
    return Student("Imposter", s.getId());
}

vector<Student> HackerStudent::stressStudents(int count) {
    vector<Student> batch;
    for (int i = 0; i < count; ++i)
        batch.push_back(Student("Bot" + to_string(i), i));
    return batch;
}
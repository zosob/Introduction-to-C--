#include<iostream>
#include<memory>
#include<cstring>
using namespace std;

class Student{
    public:
        string name; //string handles it's own memory
        int id;
        Student(string n, int i) : name(n), id(i){}

    // private:
    //     string name; //string handles it's own memory
    //     int id;
    // public:
    //     Student(const char*n, int i){
    //         id = i;
    //         name = new char[strlen(n) + 1];
    //         strcpy(name, n);
    //     }
    //     Student(const Student& other){  //copy constructor
    //         id = other.id;
    //         name = new char[strlen(other.name)+1];
    //         strcpy(name, other.name);   //Copy content
    //     }
    //     //Copy assignment operator...
    //     Student& operator=(const Student& other){
    //         if(this == &other)
    //             return *this;   //self-assignment
    //         delete[] name;
    //         id = other.id;
    //         name = new char[strlen(other.name)+1];
    //         strcpy(name, other.name);

    //         return *this;
    //     }
    //     ~Student(){     //destructor
    //         cout<<"Destroying"<<name<<endl;
    //         delete[] name; //Freed the heap memory...
    //         name = nullptr;
    //     }
        void print() const{
            cout<<"Student: "<<name<<"(ID: "<<id<<")"<<endl;
        }
};

int main(){
    //unique_ptr - One owner, deleted automatically...
    unique_ptr<Student> s1 = make_unique<Student>("Alice", 101);
    s1->print();

    //transfer ownership...
    unique_ptr<Student> s2 = move(s1);
    s2->print();

    //shared_ptr - multiple owners, delte when last owner
    //dies...
    shared_ptr<Student> s3= make_shared<Student>("Bob", 102);
    shared_ptr<Student> s4 = s3;    //both own this now.
    s3->print();
    s4->print();
}
#include<iostream>
#include<vector>
using namespace std;

class Student{
    public:
        string name;
        int id;
        Student(): name(""), id(0){}
        Student(string n, int i): name(n), id(i){}
        void print() const{
            cout<<name<<"(ID: " <<id<<")"<<endl;
        }
};

int main(){
    int n = 3;
    
    Student* s = new Student("Alice", 101);

    s->print();

    cout<<s->name<<endl;
    cout<<(*s).id;

    delete s;
    Student* roster = new Student[n];
    roster[0] = Student("Alice", 101);
    roster[1] = Student("Bob", 102);
    roster[2] = Student("Carol", 103);

    for(int i = 0; i< n; i++){
        roster[i].print();
    }

    delete[] roster;





    // int n;

    // int size = 0, capacity = 2;
    // double input;

    // cout<<"How many scores?";
    // cin >> n;

    // double* scores=new double[n];

    // for(int i = 0; i < n; i++){
    //     cout<<"Enter score:"<<i+1<<":";
    //     cin>>scores[i];
    // }

    // for(int i = 0; i < n; i++){
    //     cout<<"scores["<<i<<"]="<<scores[i]<<endl;
    // }
    
    // double* newArray = new double[n+1];

    // for(int i = 0; i < n; i++){
    //     newArray[i] = scores[i];
    // }

    // scores = newArray;
    // n += 1;

    // cout<<"Enter the bonus score:";
    // cin>>scores[n-1];

    // while(cin>>input && input>=0){
    //     if(size == capacity){
    //         capacity*=2; //Increasing capacity...
    //         double* newArray = new double[capacity];// Creating new array...
    //         for(int i = 0; i < n; i++){//Copying from old array to new array...
    //             newArray[i] = scores[i];
    //         }
    //         delete[] scores; //Deleting old array...
    //         scores = newArray;//Assigning old pointed to new pointer
    //     }
    //     scores[size] = input;
    //     size++;//Updating size...
    // }
}
/*
    Spring Break Zombie Survival Helper
    -----------------------------------
    Topic: User-Defined Functions (Week 7–8)
    Concepts:
      - Function declarations (prototypes)
      - Function definitions
      - Parameters and return values
      - Void (print) functions
      - Functions with branches (if/else)
      - Functions with loops
      - Simple "unit test" style checking

    Story:
      It's Spring Break. Everything was fun until...
      a zombie outbreak started on the beach.

      This program helps the user estimate:
        - average zombies seen per day
        - danger rating based on zombie sightings
        - total zombies over several days
        - a rough "survival chance" percentage
        - bool ShouldRun(int zombiesBehindYou)
        - void Warn() → prints a dramatic message
*/
#include <iostream>
using namespace std;

// Function declarations go here...
void printIntro();

int main() {
    cout << "=== SPRING BREAK ZOMBIE SURVIVAL HELPER ===" << endl;
    printIntro();
   
}

void printIntro(){
    cout<<"\nYou were hoping for a relaxing spring break at the beach..."<<endl;
    cout<<"But suddenly, zombie outbreak sirens start blaring!!"<<endl;
    cout<<"You decide to track zombie sightings and estimate your chance of survival."<<endl;
    cout<<"Let's begin!\n"<<endl;
}
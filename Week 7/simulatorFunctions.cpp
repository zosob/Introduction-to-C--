#include<iostream>
#include<cstdlib>
using namespace std;

//Declaring functions...
void printWelcome();        
void printStats(int health, int attack);
int choice();
int calculateDamage(int attack, int defense);
bool isCriticalHit();
int getValidChoice();


int main(){

    int health = 1, attack = 10, defense = 5, path;

    printWelcome();
    printStats(health, attack);
    path = choice();
    cout<<"Damage is: "<<calculateDamage(attack, defense)<<endl;
    cout<<"Damage is: "<<calculateDamage(45, 10)<<endl;
    cout<<"Damage is: "<<calculateDamage(41, 13)<<endl;
    cout<<"Damage is: "<<calculateDamage(1, 9)<<endl;
    if(isCriticalHit()){
        cout<<"That was a critical hit!";
    } else {
        cout<<"You are okay... for now.";
    }


}

// Function definitions...
void printWelcome(){            
    cout<<"Welcome to THE ARENA OF DEATH!\n\n";
}

void printStats(int health, int attack){

    cout<<"Health: "<<health<<endl;
    cout<<"Attack: "<<attack<<endl;
}

int choice(){
    
    int num;
    cout<<"\n1. Fight\n";
    cout<<"2. Rest\n";
    cout<<"3. Quit\n";
    cout<<"Choose your path: ";
    cin>>num;

    return num;
}

int calculateDamage(int attack, int defense){

    int damage;
    damage = attack - (defense/2);
    if(damage<0){
        damage = 0;
    }
    return damage;

}

bool isCriticalHit(){
    int roll = rand() % 100;
    if (roll < 20){
        return true;
    }
    return false;
}

int getValidChoice(){
    int choice;
    do{
        cout<<"\n1. Fight\n";
        cout<<"2. Rest\n";
        cout<<"3. Quit\n";
        cout<<"Choose your path: ";
        cin>>choice;
    } while(choice != 1 && choice != 2 && choice != 3);

    return choice;
}
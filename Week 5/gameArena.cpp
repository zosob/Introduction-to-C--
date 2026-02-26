/* Player can fight enemies, rest, or quit. Nested loops display enemy waves, and the game will end when the player wins, loses, or quits. */

#include<iostream>
#include<cstdlib>
using namespace std;

int main(){

    enum GameState {PLAYING, WON, LOST, QUIT };
    GameState state = PLAYING;

    int health = 10, round = 1;

    cout<<"Welcome to THE ARENA OF DEATH!\n\n";

    while (state == PLAYING){

        cout<<"\n---------------\n";
        cout<<"Round: "<<round<<endl;
        cout<<"Health: "<<health<<endl;

        int choice;

        cout<<"\n1. Fight\n";
        cout<<"2. Rest\n";
        cout<<"3. Quit\n";
        cout<<"Choose your path: ";
        cin>>choice;

        switch (choice){

            case 1 :    //Fight
                cout<<"\nBeware! Enemies approaching!\n";

                for (int row = 0; row < round; row++){
                    for (int col = 0; col < 5; col++){
                        cout<<"#";
                    }
                    cout<<endl;
                }

                {
                    int damage = rand()%4 + 1;
                    health -= damage;
                    cout<<"You took "<<damage<< " damage!\n";
                }
                break;
            
            case 2:     //Rest
                health += 2;
                cout<<"You've recovered 2 health.\n";
                break;
            
            case 3:     //Quit
                state = QUIT;
                break;
            
            default:
                cout<<"Invalid choice!\n";
                continue;    
        }

        if (health <= 0){
            state = LOST;
            break;  // Break out of while loop
        }

        round++;

        if (round > 5){
            state = WON;
            break;
        }
    }

    cout<<"\n +++++++++++++++++++++++++\n";
    switch(state){
        case WON:
            cout<<"You survived the arena!!\n";
            break;
        case LOST:
            cout<<"You were defeated by the arena!!\n";
            break;
        case QUIT:
            cout<<"You quit the arena!!\n";
            break;
        default:
            break;

    }


}
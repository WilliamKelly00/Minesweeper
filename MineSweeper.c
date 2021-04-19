#include <stdio.h>

struct Point
{
    int x,y;
};


void initialization(){
    printf("Setting up the game: \n");
}

void teardown(){
    printf("Tearing down the game \n");
}

void command(char code, int *gameboard){
    switch (code)
    {
    case'F':
        // flag a spot
        flag(gameboard);
        break;
    case 'R':
        // remove a flag
        removeFlag(gameboard);
        break;
    case 'A':
        //assert a spot is bomb free
        checkIfBomb(gameboard)
        break;
    case 'Q':
        //stop running the game loop 
        isRunning(0);
        break;
    default:
        break;
    }

}

void flag(int *gameboard){
    struct Point coordinates;
    coordinates = askCoordinates(); 
    
}

void removeFlag(int *gameboard){
    struct Point coordinates;
    coordinates = askCoordinates(); 

}

struct Point askCoordinates(){
    struct Point coordinates;
    
    printf("Enter your horizontal coordinate (0 - 10) and press enter");
    scanf("%d", coordinates.x);
    printf("Enter your vertical coordinate (0 - 10) and press enter");
    scanf("%c", coordinates.y);

    return coordinates

}

void checkIfBomb(int *gameboard){
    struct Point coordinates;
    coordinates = askCoordinates();
    if(){
        if(*gameboard[coordinates.x][coordinates.y] == -1){
            lose();
        }
        else
        {
            *gameboard[coordinates.x][coordinates.y] = 1;
        }
    }
}

void lose(){
    printf("You lose");
    isRunning(0);
}

void askInput(){
    printf("(F) flag a spot as a mine, (R) remove a flag, (A) assert that a spot is mine free, (Q)uit"); 
}

int isRunning(int running){
    return running;
}

void update(int *gameboard){

}
void display(int *gameboard){

}

int main(){
    initialization();
    while(isRunning()!=0){
        char ch1;
        askInput();
        scanf("%c", ch1);
        command(ch1);
        update();
        display();
    }
    teardown();
    return 0;
}
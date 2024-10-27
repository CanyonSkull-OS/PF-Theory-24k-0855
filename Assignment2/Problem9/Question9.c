#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int grid[5][5];
void print_grid();
int movement();
void init_grid(int grid[5][5]);
char move;
int x = 0, y = 0, game_over;


int main(){
    init_grid(grid);
    while (move != 'q' && game_over != 1){
        game_over = 1;
        for (int i = 0; i < 5; i++){
            for (int j = 0; j < 5; j++){
                if (grid[i][j] == 'I'){
                    game_over = 0;
                }
            }
        }
        print_grid();
        if (game_over == 1){
            break;
        }
        movement();
    }
    

    if (game_over == 1){
        printf("\n\n\t\t\tYou have finished the game..\n\n");
    }
    else{
        printf("\n\n\t\t\t\tEnding Game...\n\n");
    }

    return 0;
}

void init_grid(int grid[5][5]){
    srand(time(NULL));
    int rnd_num;
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            grid[i][j] = "   IX"[rand() % 5];
        }
    }
    grid[y][x] = 'P';
}


void print_grid(){
        printf("\n------------------\n");
        for (int i = 0; i < 5; i++){
            printf("| ");
            for (int j = 0; j < 5; j++){
                printf("%c |", grid[i][j]);
            }
            printf("\n");

            for (int k = 0; k < 9; k++){
                printf("--");
            }
            printf("\n");
        }
        printf("\n");
}

int movement(){
    printf("\n\nChoose Move:\n"
    "W: Up\n"
    "S: Down\n"
    "A: Left\n"
    "D: Right\n"
    "Q: QUIT GAME\n"
    "MOVE: ");
    scanf(" %c", &move);

    switch (move){
        case 'w':
            if (y > 0){
                if (grid[y-1][x] != 'X'){
                    grid[y-1][x] = grid[y][x];
                    grid[y][x] = ' ';
                    y--;
                }
                else{
                    printf("You cannot move there\n");
                }
            }
            else{
                printf("No Space to move up\n");
            }
            break;
        case 'a':
            if (x > 0){
                if (grid[y][x-1] != 'X'){
                    grid[y][x-1] = grid[y][x];
                    grid[y][x] = ' ';
                    x--;
                }
                else{
                    printf("You cannot move there\n");
                }
            }
            else{
                printf("No Space to move left\n");
            }
            break;
        case 's':
            if (y < 4){
                if (grid[y+1][x] != 'X'){
                    grid[y+1][x] = grid[y][x];
                    grid[y][x] = ' ';
                    y++;
                }
                else{
                    printf("You cannot move there\n");
                }
            }
            else{
                printf("No Space to move down\n");
            }
            break;
        case 'd':
            if (x < 4){
                if (grid[y][x+1] != 'X'){
                    grid[y][x+1] = grid[y][x];
                    grid[y][x] = ' ';
                    x++;
                }
                else{
                    printf("You cannot move there\n");
                }
            }
            else{
                printf("No Space to move right\n");
            }
            break;
        default:
            break;
    }
    return move;
}
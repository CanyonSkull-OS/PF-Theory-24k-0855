#include <stdio.h>

int Can_Win(int matches);

int main(){
    int matchsticks, result;
    printf("Enter Number of Matchsticks: ");
    scanf("%d", &matchsticks);
    result = Can_Win(matchsticks);
    if (result == -1){
        printf("\nIt is impossible to win the game\n");
    }
    else {
        printf("\nPick %d matchsticks to win the game\n", result);
    }
}

int Can_Win(int matches){
    int i=0;
    if (matches % 5 == 0){
        return -1;
    }
    else {
        return matches % 5;
    }
}
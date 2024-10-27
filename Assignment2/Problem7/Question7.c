#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
    srand(time(NULL));
    int count = 0, char_arr[6][5];
    int score = 0;

    for (int i = 0; i < 6; i++){
        for (int j = 0; j < 5; j++){
            char_arr[i][j] = 'A' + rand() % 26;
        }
    }


    char std_id[] = "0855";
    for (int i = 0; i < 4; i++){
        char_arr[5][i] = std_id[i];
    }

    printf(" ------------------\n");
    for (int i = 0; i < 6; i++){
        printf("|");
        for (int j = 0; j < 5; j++){
            printf(" %c |", char_arr[i][j]);
        }
        printf("\n");
        printf(" ");
        for (int k = 0; k < 9; k++){
            printf("--");
        }
        printf("\n");
    }

    char str[20];
    while (1){
        printf("Enter String to Search: ");
        scanf("%s", &str);

        if (strcmp(str, "END") == 0){
            break;
        }

        int found = 0;
        for (int i = 0; i < 6; i++){
            for (int j = 0; j < 5 - strlen(str); j++){
                if (char_arr[i][j] == str[0]){
                    int match = 1;
                    for (int k = 1; k < strlen(str); k++){
                        if (char_arr[i][j + k] != str[k]){
                            match = 0;
                            break;
                        }
                    }
                    if (match) {
                        found = 1;
                        break;
                    }
                }
            }
            if (found) {
                break;
            }
        }

        if (!found){
            for (int i = 0; i <= 6 - strlen(str); i++) {
                for (int j = 0; j < 5; j++) {
                    int match = 1;
                    for (int k = 0; k < strlen(str); k++) {
                        if (char_arr[i + k][j] != str[k]) {
                            match = 0;
                            break;
                        }
                    }
                    if (match) {
                        found = 1;
                        break;
                    }
                }
                if (found) {
                    break;
                }
            }
        }

        if (found) {
            score++;
            printf("%s is present \nScore: %d\n\n", str, score);
        }
        else {
            score--;
            printf("%s is not present \nScore: %d\n\n", str, score);
        }

    }

    printf(" ------------------\n");
    for (int i = 0; i < 6; i++){
        printf("|");
        for (int j = 0; j < 5; j++){
            printf(" %c |", char_arr[i][j]);
        }
        printf("\n");
        printf(" ");
        for (int k = 0; k < 9; k++){
            printf("--");
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}
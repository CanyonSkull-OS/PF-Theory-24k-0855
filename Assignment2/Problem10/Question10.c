#include <stdio.h>

void startop(int, int*);
void starmiddle(int, int*);
void starbottom(int, int*);

int main(){
    int count = 0, n;
    printf("Enter Size: ");
    scanf("%d", &n);
    startop(n, &count);
    starmiddle(n, &count);
    starbottom(n, &count);
    return 0;
}


void startop(int n, int *count){
    for (int i = 0; i < n-1; i++){
        for (int l = 0; l < n-2; l++){
            printf(" ");
        }
        for (int j = n-i; j > 0; j--){
            printf(" ");
        }
        for (int k = 0; k <= i; k++){
            if (k == 0 || k == i){
            printf("* ");
            (*count)++;
            }
            else{
                printf("  ");
            }
        } //Prints the top pyramid
        printf("\n");
    }
    for (int i = 0; i < n; i++){
        printf("*");
    }
    for (int j = 0; j < *count; j++){
        printf(" ");
    }
    for (int i = 0; i < n; i++){
        printf("*");
    }
    printf("\n"); //Prints the Horizontal Line
}


void starmiddle(int n, int *count){ //Prints the Middle Reverse Pyramid
    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n; j++){ //Prints Left Diagonal Lines
            if(j == i+1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        for (int l = 0; l <= *count-1; l++){ //Prints Spaces in between
            printf(" ");
        }
        for (int j = 1; j <= n; j++){ //Prints Right Diagonal Lines
            if(j == n-i-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }     
        printf("\n");
    }
}


void starbottom(int n, int *count){
    int space = 0;
    for (int i = n-1; i > 1; i--){
        for (int j = 0; j <= (2*n)-2; j++){//Printing Left Leg
            if(j == i-1 || j == i+(n-2)-space){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        space++;
        for (int j = 0; j <= (2*n)-2; j++) {//Printing Right Leg
            if (j == (2*n)-i-2 || j == (2*n)-i-4-(n-2)+space){
                printf("*");
            } else {
                printf(" ");
            }
        }      
    printf("\n");
    }
    int lastline = ((2*(n-1)-1) + 2*n);
    for (int m = 0; m < lastline; m++){
        if (m == 0 || m == lastline-1){
            printf("*");
        }
        else{
            printf(" ");
        }
    }
}
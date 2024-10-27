#include <stdio.h>

void Horizontal_Histogram(int array[], int count);
void Vertical_Histogram(int array[], int count);


int main(){
    int count;
    printf("Enter Integer Count: ");
    scanf("%d", &count);
    int arr_int[count];

    printf("Enter Integer Values: \n");
    for (int i=0;i<count;i++){
        scanf("%d", &arr_int[i]);
    }

    Horizontal_Histogram(arr_int, count);
    Vertical_Histogram(arr_int, count);

    return 0;
}


void Horizontal_Histogram(int array[], int count){
    printf("Horizontal Histogram: \n\n");

    for (int i=0;i<count;i++){
        printf("Value %d: ", i+1);
        for (int j=0;j<array[i];j++){
            printf("*");
        }
        printf("\n");
    }
    printf("\n\n\n");
}


void Vertical_Histogram(int array[], int count){
    int max = 0;
    for (int i=0;i<count;i++){
        if (array[i] > max){
            max = array[i];
        }
    }
    printf("Vertical Histogram: \n\n");
    
    for (int i=max;i>0;i--){
        for(int j=0;j<count;j++){
            if (array[j] >= i){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }

    for (int i=0;i<count;i++){
        printf("%d ", array[i]);
    }
    printf("\n\n\n");
}
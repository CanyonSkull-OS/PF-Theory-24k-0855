#include <stdio.h>

int main(){
    int array_size;
    printf("Enter Array Size: ");
    scanf("%d", &array_size);


    int arr[array_size];
    printf("Input %d elements in the array (value must be < 9999):\n", array_size);
    for (int i = 0; i < array_size; i++){
        printf("Element - %d: ", i);
        scanf("%d", &arr[i]);
    }
    int min = arr[0];
    int smin = 9999;
    for (int i = 1; i < array_size; i++){
        if (min > arr[i]){
            smin = min;
            min = arr[i];
        }
        if (min < arr[i] && smin > arr[i]){
            smin = arr[i];
        }
        
    }
    printf("The Second smallest element in the array is: %d", smin);

    return 0;
}




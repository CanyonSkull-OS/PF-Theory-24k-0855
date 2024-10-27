#include <stdio.h>

char* compress(char string[], char compressed[], int *count);

int main(){
    int count = 0;
    char string[100], compressed[100];
    printf("Enter Word: ");
    scanf("%s", string);

    compress(string, compressed, &count);

    printf("Compressed Word: %s\n", compressed);
    printf("%d characters were removed", count);

    return 0;
}

char* compress(char string[], char compressed[], int *count){
    printf("String: %s\n\n", string);
    int j = 0;
    for (int i = 0; string[i] != '\0'; i++){
        if (string[i] != string[i-1]){
            compressed[j] = string[i];
            j++;
        }
        else{
            (*count)++;
        }

    }
    compressed[j] = '\0';
    return compressed;
}
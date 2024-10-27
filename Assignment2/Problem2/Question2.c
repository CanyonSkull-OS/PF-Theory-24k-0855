#include <stdio.h>

int main(){
    char slogan1[100];
    int size1 = sizeof(slogan1)/sizeof(slogan1[0]);

    for (int i = 0; i < size1; i++){
        slogan1[i] = 0;
    }
    printf("Enter Slogan: ");
    fgets(slogan1, sizeof(slogan1), stdin);


    int alphabets_count[256];
    int size_alphabet =sizeof(alphabets_count)/sizeof(alphabets_count[0]);
    

    for (int i = 0; i < 256; i++){
        alphabets_count[i] = 0;
    }

    for (int i=0;slogan1[i] != '\0';i++){
        alphabets_count[(int)slogan1[i]]++;
    }
    printf("For '%s':", slogan1);
    printf("{'%c';%d", slogan1[0], alphabets_count[(int)slogan1[0]]);
    for (int i=1;i<slogan1[i] != '\0';i++){
        if (slogan1[i] != '*'){
            printf(",'%c':%d", slogan1[i],
            alphabets_count[(int)slogan1[i]]);
        }
    }
    printf("}");
    printf("\n\n");

    return 0;
}
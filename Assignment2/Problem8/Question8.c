#include <stdio.h>

int BinaryToDecimal(int binarynum);
int DecimalToBinary(int decimalnum);
void DecimalToHexadecimal(int decimalnum);
void HexadecimalToDecimal(char string[]);
void BinaryToHexaDecimal(int binarynum);
void HexadecimalToBinary(char string[]);



int main(){
    int choice, num, num2;
    char string[10];
    printf("Coversion Menu:\n\n"
    "1: Binary to Decimal\n\n"
    "2: Decimal to Binary\n\n"
    "3: Decimal to HexaDecimal\n\n"
    "4: HexaDecimal to Decimal\n\n"
    "5: Binary to HexaDecimal\n\n"
    "6: HexaDecimal to Binary\n\n"
    "7: EXIT\n\n");

    printf("Choose Option: ");
    scanf("%d", &choice);
    while (choice != 7){
        switch (choice){
            case 1:
                printf("Enter Binary Number: ");
                scanf("%d", &num);
                num2 = BinaryToDecimal(num);
                printf("Binary to Decimal: %d\n\n", num2);
                break;
            case 2:
                printf("Enter Decimal Number: ");
                scanf("%d", &num);
                num2 = DecimalToBinary(num);
                printf("Decimal to Binary: %d\n\n", num2);
                break;
            case 3:
                printf("Enter Decimal Number: ");
                scanf("%d", &num);
                printf("Decimal to HexaDecimal: ");
                DecimalToHexadecimal(num);
                printf("\n\n");    
                break;
            case 4:
                printf("Enter HexaDecimal Number: ");
                scanf("%s", &string);
                HexadecimalToDecimal(string);
                printf("\n\n");                          
                break;
            case 5:
                printf("Enter Binary Number: ");
                scanf("%d", &num);
                BinaryToHexaDecimal(num);
                printf("\n\n"); 
                break;
            case 6:
                printf("Enter HexaDecimal Number: ");
                scanf("%s", &string);
                HexadecimalToBinary(string);
                printf("\n\n");
                break;
            default:
                break;
        }
        printf("Choose Option: ");
        scanf("%d", &choice);
    }
    printf("\n\n\t\t\t\tEnding Program\n\n");
    return 0;
}


int BinaryToDecimal(int binarynum){
    int remainder, i = 0, num = 0, power = 1;
    while (binarynum != 0){
        remainder = binarynum % 10;
        binarynum /= 10;
        num += remainder * power;
        power *= 2;
        i++;
    }
    return num;
}


int DecimalToBinary(int decimalnum){
    int bin_pow = 1, remainder, step = 1, bin_num = 0;
    while(decimalnum > 0){
        remainder = decimalnum % 2;
        decimalnum /= 2;
        bin_num += remainder * step;
        step *= 10;
    }
    return bin_num;
}


void DecimalToHexadecimal(int decimalnum){
    char hexa_dec[20], i = 0, remainder;

    while (decimalnum != 0){
        remainder = decimalnum % 16;
        if(remainder < 10){
            hexa_dec[i] = remainder + '0';
        }
        else{
            hexa_dec[i] = remainder - 10 + 'A';
        }
        i++;
        decimalnum /= 16;
    }

    for (int j=i-1; j>=0; j--){
        printf("%c", hexa_dec[j]);
    }
    printf("\n\n");

}


void HexadecimalToDecimal(char string[]){
    int dec_num = 0, i = 0, base = 1;
    char temp = string[i];
    
    while (temp != '\0'){
        i++;
        temp = string[i];
    }
    
    for (int j = i - 1; j >= 0; j--){
        if (string[j] >= '0' && string[j] <= '9') {
            dec_num += (string[j] - '0') * base;
        }
        else if (string[j] >= 'A' && string[j] <= 'F'){
            dec_num += (string[j] + 10 - 'A') * base;
        }
        base *= 16;
    }
    printf("HexaDecimal to Decimal: %d\n\n", dec_num);
}


void BinaryToHexaDecimal(int binarynum){
    int num = BinaryToDecimal(binarynum);
    DecimalToHexadecimal(num);
}

void HexadecimalToBinary(char string[]){
    int dec_num = 0, i = 0, base = 1;
    char temp = string[i];
    
    while (temp != '\0'){
        i++;
        temp = string[i];
    }
    
    for (int j = i - 1; j >= 0; j--){
        if (string[j] >= '0' && string[j] <= '9') {
            dec_num += (string[j] - '0') * base;
        }
        else if (string[j] >= 'A' && string[j] <= 'F'){
            dec_num += (string[j] + 10 - 'A') * base;
        }
        base *= 16;
    }
    printf("HexaDecimal to Binary: %d", DecimalToBinary(dec_num));
}
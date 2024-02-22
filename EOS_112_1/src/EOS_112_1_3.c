#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void myatoi(const char *str,int* value, int *digits, int *num_digits) {
    int sign = 1; // 1 for positive, -1 for negative
    int count = 0; // digits of number
    *value = 0;

    // check the string is empty or not
    if (str == NULL) {
        printf("Empty String!");
        return;
    }

    // check the sign
    if (str[0] == '-') {
        sign = -1; 
        str++; 
    } else if (str[0] == '+') {
        str++; 
    }

    while (*str != '\0') {
        if (*str < '0' || *str > '9') {
            printf("Error: Non-numeric character found\n"); 
            return;
        }

        *value = *value * 10 + (*str - '0');
        digits[count] = *str - '0';
        count++; 
        str++;
    }

    *value *= sign;
    printf("Value: %d\n", *value);
    printf("Digits: ");
        for (int i = 0; i < count; i++) {
            printf("%d ", (int)(sign * digits[i] * pow(10,count-i-1)));
        }

    printf("\n");
    *num_digits = count;
}

int main() {
    char str[100];
    printf("Enter a string of digits:");
    scanf("%s",str);
    int digits[100]; 
    int value,num_digits; 
    myatoi(str, &value, digits, &num_digits);
    return 0;
}

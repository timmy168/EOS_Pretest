#include <stdio.h>
#include <stdbool.h>

int myatoi(const char *str, int *digits, int *num_digits) {
    int sign = 1; // 1 for positive, -1 for negative
    int value = 0; // number value
    int count = 0; // digits of number

    // check the string is empty or not
    if (str == NULL) {
        return -1; // empty string
    }

    // check the sign
    if (str[0] == '-') {
        sign = -1; // negative
        str++; // move foward the str pointer
    } else if (str[0] == '+') {
        str++; // move foward the str pointer
    }

    while (*str != '\0') {
        // check the char is number or not
        if (*str < '0' || *str > '9') {
            return -2; 
        }

        // convert the string to num
        value = value * 10 + (*str - '0');

        // convert the char to num and save if digit
        digits[count] = *str - '0';
        count++; 

        str++;
    }

    // set the sign
    value *= sign;

    *num_digits = count;
    return value;
}

int main() {
    const char *str1 = "123";
    const char *str2 = "-123";
    const char *str3 = "123g";
    int digits[10]; 
    int num_digits; 
    int result; 
    result = myatoi(str1, digits, &num_digits);
    if (result >= 0) {
        printf("Value: %d\n", result);
        printf("Digits: ");
        for (int i = 0; i < num_digits; i++) {
            printf("%d ", digits[i]);
        }
        printf("\n");
    } else {
        printf("Error: Non-numeric character found\n");
    }
    return 0;
}
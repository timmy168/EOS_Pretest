#include <stdio.h>

// calculating a^b, and gets the last 10 digit
long long int power_mod_10(long long int a, long long int b) {
    long long int result = 1;
    while (b > 0) {
        if (b % 2 == 1) {
            result = (result * a) % 10000000000LL; 
        }
        a = (a * a) % 10000000000LL; 
        b /= 2;
    }
    return result;
}

int main() {
    long long int sum = 0;
    for (int i = 1; i <= 999; i += 2) {
        sum += power_mod_10(i, i);
        sum %= 10000000000LL;
    }
    printf("Sum of the series: %lld\n", sum);
    return 0;
}

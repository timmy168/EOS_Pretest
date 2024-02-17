#include <stdio.h>
#include <stdlib.h>

int recursive_gcd(int a,int b)
{
    if((a%b)==0) return b;
    recursive_gcd(b,a%b);
}

int iterative_gcd(int a,int b)
{
    int temp;
    while(b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    int a,b;
    printf("Enter 2 numbers: ");
    scanf("%d,%d",&a,&b);
    printf("%d\n",recursive_gcd(a,b));
    printf("%d\n",iterative_gcd(a,b));
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main()
{
    int num;
    scanf("%d",&num);
    int reversed = 0;
    int sign = 1;
    int pop;
    sign=(num<0)?-1:1;
    num=(num<0)?-num:num;

    while(num>0)
    {
        pop = num%10;
        reversed = reversed*10+pop;
        num/=10;
    }
    printf("%d\n",reversed*sign);
    return 0;
}
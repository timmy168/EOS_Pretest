#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    long long int total=0;
    for(int i=1;i<=10000;i++)
    {
        total += pow(i,2);
    }
    printf("Total:%lld\n",total);
    return 0;
}
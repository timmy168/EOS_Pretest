#include <stdio.h>
#include <math.h>
int main()
{
    long long int sum;
    for(int i=1;i<1000;i++)
    {
        sum += pow(i,i);
    }
    printf("The sum is %lld\n",sum);
    return 0;
}
#include <stdio.h>
#include <math.h>
#include <stdint.h>

int main()
{
    uint8_t result_1 = 0;
    uint16_t result_2 = 0;
    for(int i=1;i<=10;i+=2)
    {
        result_1 += pow(i,i);
        result_2 += pow(i,i);
    }
    printf("The result in 8bit:%d\n",result_1);
    printf("The result in 16bit:%d\n",result_2);
    return 0;
}
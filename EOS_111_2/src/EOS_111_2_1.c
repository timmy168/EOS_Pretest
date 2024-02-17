#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,res=1;
    printf("Please enter the exponentioal:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        res = (res<<3)+(res<<1);
    }
    printf("The result is %d\n",res);
    return 0;
}
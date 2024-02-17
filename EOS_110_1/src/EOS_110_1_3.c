#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int candicates[6]={1,2,3,4,5,6};
int candicates_size = 6;
int time = 5;
int target = 15;

void combination(int*** result,int* before,int* result_size,int start,int iter,int sum)
{
    // valid solution
    if(iter == time && sum == target)
    {
        (*result_size)++;
        *result = (int**)realloc(*result,sizeof(int*) * (*result_size));
        (*result)[*result_size-1] = (int*)malloc(sizeof(int) * time);
        memcpy((*result)[*result_size-1],before,sizeof(int) * time);
        return;
    }

    if(iter == time) return;

    //fill the number of the dice
    for(int i=start;i<candicates_size;i++)
    {
        //invalid solution
        if(sum+candicates[i]>target) return;
        //iter => the "iter"th of the element in before
        before[iter] = candicates[i];
        combination(result,before,result_size,i,iter+1,sum+candicates[i]);
    }
}

int main()
{
    int** result = NULL;
    int* before = (int*)malloc(sizeof(int)*time);
    int result_size = 0;

    combination(&result,before,&result_size,0,0,0);

    printf("The total amounts of combination is:%d\n",result_size);
    for(int i=0;i<result_size;i++)
    {
        printf("Result #%2d: ",i);
        for(int j=0;j<time;j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
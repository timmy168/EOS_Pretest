#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int candicate[20]={ 1, 2, 3, 4, 5, 6, 7, 8, 9,10,
                   11,12,13,14,15,16,17,18,19,20};
int candicate_size = 20;
int time = 6;
int target = 72;

void combine(int*** result,int* before,int* result_size,int start,int iter,int sum)
{
    // valid soultion
    if((iter == time) && (sum==target))
    {
        (*result_size)++;
        *result = (int**)realloc(*result,sizeof(int*) * (*result_size));
        (*result)[(*result_size)-1] = (int*)malloc(sizeof(int)*time);
        memcpy((*result)[(*result_size)-1],before,sizeof(int)*time);
    }
    if(iter == time) return;
    for(int i=start;i<candicate_size;i++)
    {
        // invalid soultion
        if((sum+candicate[i])>target) return;
        before[iter]=candicate[i];
        combine(result,before,result_size,i,iter+1,sum+candicate[i]);
    }
}

int main()
{
    int** result = NULL;
    int* before = (int*)malloc(sizeof(int)*time);
    int result_size = 0;
    combine(&result,before,&result_size,0,0,0);
    printf("Total result numbers: %d\n",result_size);
    for(int i=0;i<result_size;i++)
    {
        printf("result #%2d: ",i);
        for(int j=0;j<time;j++)
        {
            printf("%d",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
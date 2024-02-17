#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[10];
    bool is_pal;
    printf("Please enter the string\n");
    scanf("%s",&str);
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]!=str[strlen(str)-1-i])
        {
            printf("The string is not paltimore\n");
            break;
        }
        is_pal = true;
    }
    if(is_pal) printf("The string is paltimore\n");
}
/*
濾除所有質數與質數倍數（2 3 5除外），正整數集合A
A倒數無窮總和為S = m/n
m + n = ans
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 4000

//determine the number is prime or not
bool is_prime(int num)
{
    for(int i=2;i<num;i++)
    {
        if((num%i)==0)return false;
    }
    return true;
}

//determine the number is the times of prime or not 
bool is_prime_times(int num, int* prime, int index_prime)
{
    
    for(int i=0;i<index_prime;i++) if((num%prime[i])==0) return true;
    return false;
}

//add the number into the list
void add(int** list, int num,int index)
{
    *list = (int*)realloc(*list,sizeof(int)*(index+1));
    (*list)[index] = num;
}

// find the gcd of two numbers
int gcd(int a,int b)
{
    if(a%b==0) return b;
    return gcd(b,a%b);
}

int main()
{
    int* prime = NULL; // the set of prime number
    int* Set = NULL; // the set of number without prime numbers
    int* final = NULL; // the set of number without primes numbers and their multiple
    int index_prime=0 ,index_Set=0, index_final=0;
    add(&Set,1,index_Set);
    index_Set++;
    for(int i=2;i<MAX;i++)
    {
        if((i!=2) && (i!=3) && (i!=5))
        {
            if(is_prime(i))
            {
                add(&prime,i,index_prime);
                index_prime++;
            }
            else
            {
                add(&Set,i,index_Set);
                index_Set++;
            }
        }
        else 
        {
            add(&Set,i,index_Set);
            index_Set++;
        }
    }
    for(int i=0;i<index_Set;i++)
    {
        if(is_prime_times(i,prime,index_prime)==0)
        {
            add(&final,i,index_final);
            index_final++;
        }
    }
    free(prime); //finish usage of prime
    free(Set); //finish usage of Set

    double value = 0;
    int maxgcd = 0;
    for(int i=0;i<index_final;i++)
    {
        value += 1/(double)final[i];
    }
    free(final); //finish usage of final
    maxgcd = gcd(value*10,10);
    int m = value*10;
    int ans = (m/maxgcd) + (10/maxgcd);
    printf("value: %f\n",value);
    printf("ans : %d\n", ans);
    return 0;
}
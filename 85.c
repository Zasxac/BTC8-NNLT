#include <stdio.h>
 
int main()
{
    for(int i = 2; i <= 9;i++)
    {
        printf("\n-----BANG CUU CHUONG CUA %d-----\n", i);
        for(int j = 0; j < 10; j++)
        {
            printf("\t%d x %d = %d\n", i, j, i*j);
        }
    }
}
#include <stdio.h>
 
int main()
{
        int n;
        printf("Nhap so n: ");
        scanf("%d",&n);
        printf("\n-----BANG CUU CHUONG CUA %d-----\n", n);
        for(int j = 0; j < 10 ; j++)
            {
                printf("\t%d x %d = %d\n", n, j, n*j);
            }
    
}
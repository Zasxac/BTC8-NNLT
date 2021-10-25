#include <stdio.h>
#include<conio.h>

int main()
{
    float i,j,h,n;
    printf("\n Nhap chieu cao tam giac:");
    scanf("%f", &h);
    for (i=1;i<=h;i++)
	    printf(" ");
        printf("*");
        printf("\n");
    n=h;
    for (j=2;j<h;j++)
    {
	    n-=1;
	    for (i=1;i<=n;i++)
	    	printf(" ");
	        printf("*");
	    for(i=1;i<(h-n)*2;i++)
	    	printf(" ");
	        printf("*");
	        printf("\n");
    }
    for (i=1;i<=h;i++)
    printf(" *");
    getch();
    return 0;
}
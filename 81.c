#include<stdio.h>
#include<conio.h>

int main()
{
	float a, b, c, d, max, min;

    printf("Nhap so thu nhat: ");
	scanf("%f", &a);
    printf("Nhap so thu  hai: ");
	scanf("%f", &b);
    printf("Nhap so thu   ba: ");
	scanf("%f", &c);
     printf("Nhap so thu  tu: ");
	scanf("%f", &d);

	max = a;
	if(max < b)
		max = b;
	if(max < c)
		max = c;
    if(max < d)
		max = d;
	printf("\nSo lon nhat trong 4 so %10.3f, %10.3f, %10.3f, %10.3f la: %10.3f", a, b, c, d, max);

    min = a;
	if(min > b)
		min = b;
	if(min > c)
		min = c;
    if(min > d)
		min = d;
    	printf("\nSo be  nhat trong 4 so %10.3f, %10.3f, %10.3f, %10.3f la: %10.3f", a, b, c, d, min);


	getch();
	return 0;

}
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{	double a,s=0;
	int n,i=0;
	printf("Moi nhap gia tri 1<a<2: ");
	scanf("%lf",&a);
	if(1<a<2)
	{
		while(s<a)
			{	
				s+=1.0/(pow(2,i));
				i++;
			}			
	}
    else printf("Chuong trinh loi!");
	printf("n= %d",i-1);
}

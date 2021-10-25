#include<stdio.h>
#include<conio.h>
#include<math.h>

int TGT(int n)
{	int GT=1;
	for(int i=1;i<=n;i++)
	{	
		GT*=i;
	}
	return GT;
}
int Tong(int n)
{	int S=0;
	for(int i=1;i<=n;i++)
	{	
		S+=i;
	}
	return S;
}
int main()
{
	int n,y;
	double T=0;
	printf("Moi nhap gia tri n: ");
	scanf("%d",&n);
	int x;
	for(int i=1;i<=n;i++)
	{
		x=Tong(i);
		T+=TGT(x);
	}
	y=TGT(n);	
	printf(" \n T= %lf",(T/y));
}
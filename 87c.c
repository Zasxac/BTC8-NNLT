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
	int n;
	double T=0;
    printf("Moi nhap gia tri n: ");
	scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    {
	     T+=(exp(i)/TGT(i));
    }
    printf(" \n T= %lf",T3);
}


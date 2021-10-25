// T= 1! + 2! + ... + n!

#include<stdio.h>
int main()
{
    int n,giaithua=1, S=0,i;
    printf("Nhap gia tri n: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
        {giaithua = giaithua*i;
        S = S + giaithua;}
    printf("Gia tri cua bieu thuc voi %d la:%d", n,S);
    return 0;

}   
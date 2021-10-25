#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    int t;
    int sodaonguoc=0;

    do
    {
        printf("Nhap vao so n: ");
        scanf("%d",&n);
        if(n < 1)
        {
            printf("Loi\n n phai lon hon hoac bang 1");
        }
    }   while(n < 1);
        t=n;
        while(t!=0)
    {
        sodaonguoc = sodaonguoc*10 + t%10;
        t=t/10;
    }
        printf("So nghich dao cua %d la %d", n, sodaonguoc);
        getch();
}
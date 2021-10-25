#include <stdio.h>
#include <math.h>
#include<conio.h>

int main()
{
    for (int num = 1; num < 100; ++num)
    {
        int count = 0; // đếm số ước của a
        for (int i = 2; i <= sqrt(num); i++)
        {
            if (num % i == 0)
            {
                count++;
            }
        }
        if (count == 0 && num > 1)
            printf("%5d", num);
    }
    getch();
}
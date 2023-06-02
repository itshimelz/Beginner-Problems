#include <stdio.h>

int hasDistinctDigits(int year)
{
    int digits[10] = {0};

    while (year > 0)
    {
        int digit = year % 10;

        // Check if the digit is repeated
        if (digits[digit] == 1)
        {
            return 0;
        }

        digits[digit] = 1;
        year /= 10;
    }

    return 1;
}

int main()
{
    int y;
    scanf("%d", &y);

    int nextYear = y + 1;

    while (!hasDistinctDigits(nextYear))
    {
        nextYear++;
    }

    printf("%d\n", nextYear);

    return 0;
}
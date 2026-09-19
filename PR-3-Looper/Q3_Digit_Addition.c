#include <stdio.h>
#include <conio.h>

void main()
{
    int num, first, last, sum;

    printf("Enter any number: ");
    scanf("%d", &num);

    last = num % 10;

    do
    {
        first = num;
        num = num / 10;
    } while (num != 0);

    sum = first + last;

    printf("The sum of the first and the last digit: %d", sum);
}